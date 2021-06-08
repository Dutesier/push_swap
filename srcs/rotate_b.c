/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:34:03 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 11:00:48 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int rotate_b(t_stack *b)
{
	int temp;
	int i;
	int x;

	if (b->top < 0)
		return (0);
	temp = b->table[b->top];
	i = b->top;
	x = i - 1;
	while (i > 0)
		b->table[i--] = b->table[x--];
	b->table[i] = temp;
	return (1);
}

