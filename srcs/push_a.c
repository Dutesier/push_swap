/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:34:53 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/07 20:51:34 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int push_a(t_stack *a, t_stack *b)
{
	if (b->top <= -1)
		return (0);
	a->top++;
	a->table[a->top] = b->table[b->top--];
	return (1);
}
