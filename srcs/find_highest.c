/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_highest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 09:31:10 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/17 11:28:30 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_highest(t_stack *stack)
{
	int	i;
	int	highest;
	int	position;

	i = 0;
	highest = stack->table[i];
	position = i;
	if (stack->top <= 0)
		return (0);
	while (i <= stack->top)
	{
		if (stack->table[i] > highest)
		{
			position = i;
			highest = stack->table[i];
		}
		i++;
	}
	return (position);
}
