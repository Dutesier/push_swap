/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:38:13 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 17:29:36 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_sort(t_stack *a, t_stack *b)
{
	if (is_sorted_i(a) != 0)
		return (ft_sort_stacks(a, b));
	else
		return (0);
}

int ft_sort_stacks(t_stack *a, t_stack *b)
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

