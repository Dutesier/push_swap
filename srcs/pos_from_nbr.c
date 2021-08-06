/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_from_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:37:07 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 12:39:24 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int pos_from_nbr(t_stack *stack, int nbr)
{
	int i;

	i = 0;
	while (i <= stack->top)
	{
		if (stack->table[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

