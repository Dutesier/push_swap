/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_closest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:42:31 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/11 09:49:00 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int find_closest(t_stack *stack, int target)
{
	int i;
	int close;
	int goal;

	i = 0;
	close = ft_abs(target - stack->table[0]);
	goal = 0;
	while (i <= stack->top)
	{
		if (ft_abs(target - stack->table[i]) < close)
			goal = i;
		i++;
	}
	return (goal);
}

