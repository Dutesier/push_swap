/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:18:20 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 16:35:32 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int rev_rotate_b(t_stack *b)
{
	int temp;
	int i;

	if (b->top < 0)
		return (0);
	i = 0;
	temp = b->table[0];
	while (i < b->top)
	{
		b->table[i] = b->table[(i + 1)];
		i++;
	}
	b->table[b->top] = temp;
	ft_putstr_fd("rrb\n", 1);
	return (1);
}

