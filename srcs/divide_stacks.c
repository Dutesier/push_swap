/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:44:48 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/11 11:11:19 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int div_by_median(t_stack *a, t_stack *b, int median)
{
	int smaller;
	int j;
	int moves;

	j = 0;
	smaller = ft_smaller_than(a, median);
	moves = 0;
	while (smaller > 0)
	{
		if (a->table[a->top] < median)
		{
			moves += push_b(b, a);
			smaller--;
		}
		else
			moves += rotate_a(a);
	}
	return (moves);
}

int div_after_median(t_stack *a, t_stack *b, int median)
{
	int bigger;
	int j;
	int moves;

	j = 0;
	bigger = a->top + 1 - ft_smaller_than(a, median);
	moves = 0;
	while (bigger > 0)
	{
		if (a->table[a->top] >= median)
		{
			moves += push_b(b, a);
			bigger--;
		}
		else
			moves += rotate_a(a);
	}
	return (moves);
}

static int interval_size(t_stack *stack, int u, int l)
{
	int i;
	int interval;

	i = 0;
	interval = 0;
	while (i <= stack->top)
	{
		if (stack->table[i] < u && stack->table[i] >= l)
			interval++;
		i++;
	}
	return (interval);
}

int div_interval(t_stack *a, t_stack *b, int u, int l)
{
	int interval;
	int moves;

	interval = interval_size(a, u, l);
	moves = 0;
	while (0 < interval)
	{
		if (a->table[a->top] < u && a->table[a->top] >= l)
		{
			moves += push_b(b, a);
			interval--;
		}
		else
			moves += rotate_a(a);
	}
	return (moves);
}

