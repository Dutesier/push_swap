/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_half.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:35:47 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 11:03:09 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int push_half(t_stack *sending, t_stack *receiving, char push_to)
{
	int i;
	int half;

	if (sending->top < 1)
		return (-1);
	half = (sending->top + 1) / 2;
	i = 0;
	while (i < half)
	{
		if (push_to == 'a')
			push_a(receiving, sending);
		else
			push_b(receiving, sending);
		i++;
	}
	return (i);
}	

