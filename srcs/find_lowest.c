/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lowest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:17:47 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 11:05:59 by dareias-         ###   ########.fr       */
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
	printf("\nInnitial Lowest: %i\n", lowest);
	if (stack->top <= 0)
		return (-1);
	while (i <= stack->top)
	{
		if (stack->table[i] < lowest)
		{
			position = i;
			lowest = stack->table[i];
			printf("\nFound new lowest: %i\n", lowest);
		}
		i++;
	}
	return (position);
}

