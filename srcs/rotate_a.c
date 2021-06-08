/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:11:53 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 11:00:24 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int rotate_a(t_stack *a)
{
	int temp;
	int i;
	int x;

	if (a->top < 0)
		return (0);
	temp = a->table[a->top];
	i = a->top;
	x = i - 1;
	while (i > 0)
		a->table[i--] = a->table[x--];
	a->table[i] = temp;
	return (1);
}

