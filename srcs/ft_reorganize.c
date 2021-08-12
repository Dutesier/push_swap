/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reorganize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 16:22:35 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/12 11:43:51 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_reorganize(t_stack *a)
{
	int moves;
	moves = 0;
	while (a->table[0] < a->table[a->top])
	{
		rev_rotate_a(a);
		moves++;
	}
	return (moves);
}

int ft_reorganize_b(t_stack *b)
{
	int moves;
	moves = 0;
	while (b->table[0] > b->table[b->top])
	{
		rotate_b(b);
		moves++;
	}
	return (moves);
}
