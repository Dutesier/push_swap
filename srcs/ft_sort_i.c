/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:23:12 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 19:13:56 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_sort_i(t_stack *a, t_stack *b, int uns)
{
	int t;
	int j;
	int g;

	g = 0;
	while (a->top > uns)
	{
		push_b(b, a);
		g++;
	}
	if (g > 0)	
		ft_sort_i(a, b, is_sorted_i(a));
	t = a->top;
	while (a->table[t] > a->table[t - 1])
	{
		swap_a(a);
		j = is_sorted_i(a);
		if (j > 0)
		{
			rotate_a(a);
			ft_sort_i(a, b, j);
		}
		t--;
	}
	return (0);
}

