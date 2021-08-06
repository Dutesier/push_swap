/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_from_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:32:59 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 16:22:14 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int send_high(int high, t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	if (high > 0)
	{			
		while (high-- > 0)
			i += rotate_b(b);
		i += push_a(a, b);
	}
	else if (high < 0)
	{
		while (high++ < 0)
			i += rev_rotate_b(b);
		i += push_a(a, b);
	}
	else
		i += push_a(a, b);
	return (i);
}

static int send_low(int low, t_stack *a, t_stack *b)
{	
	int i;

	i = 0;
	if (low > 0)
	{			
		while (low-- > 0)
			i += rotate_b(b);
		i += push_a(a, b);
		i += rotate_a(a);
	}
	else if (low < 0)
	{
		while (low++ < 0)
			i += rev_rotate_b(b);
		i += push_a(a, b);
		i += rotate_a(a);
	}
	else
	{
		i += push_a(a, b);
		i += rotate_a(a);
	}
	return (i);
}

int sort_from_b(t_stack *a, t_stack *b)
{
	int high;
	int low;
	int moves;

	high = find_highest(b);
	low = find_lowest(b);
	high = smart_rotate(b, high);
	low = smart_rotate(b, low);
	if (ft_abs(high) < ft_abs(low))
		moves = send_high(high, a, b);
	else
		moves = send_low(low, a, b);
	return (moves);
}
	
