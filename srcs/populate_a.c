/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:00:04 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 13:06:55 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int is_repeat(t_stack *a)
{
	int		i;
	int		x;
	int		j;
	int		buffer[a->top + 1];

	i = 0;
	x = 0;
	while (i <= a->top)
	{
		buffer[i] = a->table[i];
		i++;
	}
	while (x < a->top)
	{
		j = x + 1;
		while (j <= a->top)
		{
			if (buffer[x] == a->table[j++])
				return (0);
		}
		x++;
	}
	return (1);
}

t_stack *populate_a(t_stack *stack, char *population[])
{
	int i;
	int x;

	i = 0;
	x = stack->size - 1;
	while(i < stack->size)
	{
		stack->table[x--] = ft_atoi(population[i + 1]);
		stack->top++;
		i++;
	}
	if (is_repeat(stack) == 0)
		return (0);
	return (stack);
}

