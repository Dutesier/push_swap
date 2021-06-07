/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:00:04 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/07 20:09:06 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	return (stack);
}

