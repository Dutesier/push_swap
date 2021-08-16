/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lowest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:17:47 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/16 18:58:10 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int find_lowest(t_stack *stack)
{
	int i;
	int lowest;
	int position;

	i = 0;
	lowest = stack->table[i];
	position = i;
	if (stack->top <= 0)
		return (0);
	while (i <= stack->top)
	{
		if (stack->table[i] <= lowest)
		{
			position = i;
			lowest = stack->table[i];
		}
		i++;
	}
	return (position);
}

