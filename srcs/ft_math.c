/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:00:45 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/17 11:29:21 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

int	ft_smaller_than(t_stack *stack, int bench)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i <= stack->top)
	{
		if (stack->table[i] < bench)
			count++;
		i++;
	}
	return (count);
}

int	ft_abs(int x)
{
	if (x < 0)
		x = x * -1;
	return (x);
}
