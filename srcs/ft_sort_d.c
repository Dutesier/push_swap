/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:23:27 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 18:50:48 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_sort_d(t_stack *a, t_stack *b, int uns)
{
	int t;
	int j;

	t = b->top;
	while (b->table[t] < b->table[t - 1])
	{
		swap_b(b);
		j = is_sorted_d(b);
		if (j > 0)
		{
			rotate_b(b);
			ft_sort_d(a, b, j);
		}
		t--;
	}
	return (0);
}

