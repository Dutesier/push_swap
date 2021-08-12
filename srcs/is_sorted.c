/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:42:12 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/11 23:57:17 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int is_sorted_i(t_stack *stack)
{
	int i;

	i = stack->top;
	while (i > 0)
	{
		if (stack->table[i] > stack->table[i - 1])
			return (i);
		i--;
	}
	return (0); // Here 0 means the array is szorted up until position 0 a.k.a fully
}

int is_sorted_d(t_stack *stack)
{
	int i;

	i = stack->top - 1;
	while (i >= 0)
	{
		if (stack->table[i + 1] < stack->table[i])
			return (i + 1);
		i--;
	}
	return (0);
}

