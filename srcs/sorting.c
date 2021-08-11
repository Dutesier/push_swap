/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:38:13 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/11 11:32:18 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_sort(t_stack *a, t_stack *b)
{
	if (is_sorted_i(a) != 0)
	{
		if (a->size < 6)
			return (sort_small(a, b));
		else
			return (sort_big(a, b));
	}
	else
		return (0);
}

int ft_sort_median(t_stack *a, t_stack *b, int u, int l)
{
	int moves;
	int median;

	moves = 0;
	median = find_median(a, 0, u, l);
	moves += div_by_median(a, b, median);
	while (b->top >= 0)
		moves += sort_from_b(a, b);
	moves += ft_reorganize(a);
	if (is_sorted_i(a) == 0)
		return (moves);
	moves += div_after_median(a, b, median);
	while (b->top >= 0)
		moves += sort_from_b(a, b);
	moves += ft_reorganize(a);
	return (moves);
}

static int quarter_org(t_stack *a, t_stack *b)
{
	int moves;

	moves = 0;
	while (b->top >= 0)
		moves += sort_from_b(a, b);
	moves += ft_reorganize(a);
	return (moves);
}

int ft_sort_quarters(t_stack *a, t_stack *b, int u, int l)
{
	int moves;
	int median;
	int quarter;

	moves = 0;

	median = find_median(a, 0, u, l);
	quarter = find_median(a, 0, median, l);

	moves += div_interval(a, b, quarter, l);
	moves += quarter_org(a, b);

	moves += div_interval(a, b, median, quarter);
	moves += quarter_org(a, b);

	quarter = find_median(a, 0, u, median);
	moves += div_interval(a, b, quarter, median);
	moves += quarter_org(a, b);

	moves += div_interval(a, b, u + 1, quarter);
	moves += quarter_org(a, b);
	
	if (is_sorted_i(a) == 0)
		return (moves);
	else
		return (-4242);
}

