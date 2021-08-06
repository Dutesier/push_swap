/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:44:48 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 18:18:17 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int div_by_median(t_stack *a, t_stack *b, int median)
{
	int smaller;
	int j;

	j = 0;
	smaller = ft_smaller_than(a, median);
	while (smaller > 0)
	{
		if (a->table[a->top] < median)
		{
			push_b(b, a);
			smaller--;
		}
		else
			rotate_a(a);
	}
	return (1);
}

int div_after_median(t_stack *a, t_stack *b, int median)
{
	int bigger;
	int j;

	j = 0;
	bigger = a->top + 1 - ft_smaller_than(a, median);
	while (bigger > 0)
	{
		if (a->table[a->top] >= median)
		{
			push_b(b, a);
			bigger--;
		}
		else
			rotate_a(a);
	}
	return (1);
}
