/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:13:05 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 12:34:07 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int find_median(t_stack *stack, int i, int median)
{
	int j;
	int new_higher;

	while (i <= stack->top)
	{
		j = 0;
		new_higher = 0;
		while (j <= stack->top)
		{
			if (stack->table[j] > stack->table[i])
				new_higher++;
			j++;
		}
		if (new_higher == (stack->top / 2))
			median = stack->table[i];
		i++;
	}
	return (median);
}
