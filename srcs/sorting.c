/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:38:13 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/09 17:58:21 by dareias-         ###   ########.fr       */
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
			return (ft_sort_median(a, b));
	}
	else
		return (0);
}

int ft_sort_median(t_stack *a, t_stack *b)
{
	int moves;
	int median;

	moves = 0;
	median = find_median(a, 0, 0);
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

