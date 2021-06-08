/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:38:13 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 18:55:47 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int ft_recompile(t_stack *a, t_stack *b)
{
	while (b->top > -1)
		push_a(a, b);
	return(is_sorted_i(a));
}

int ft_sort_stacks(t_stack *a, t_stack *b)
{
	int sorted_a;
	int sorted_b;
	
	while (1)
	{
		sorted_a = is_sorted_i(a);
		sorted_b = is_sorted_d(b);

		if (sorted_a + sorted_b == 0)
			if (ft_recompile(a, b) == 0)
				return (0);
		if (sorted_a > 0)
		{
			ft_sort_i(a, b, sorted_a);
			sorted_b = is_sorted_d(b);
		}
		if (sorted_b > 0)
			ft_sort_d(a, b, sorted_b);
	}
}

