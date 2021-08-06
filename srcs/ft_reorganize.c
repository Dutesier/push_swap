/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reorganize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 16:22:35 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 16:31:28 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_reorganize(t_stack *a)
{
	int i;
	int moves;
	i = a->top;
	moves = 0;
	while (a->table[0] < a->table[a->top])
	{
		rev_rotate_a(a);
		moves++;
	}
	return (moves);
}

