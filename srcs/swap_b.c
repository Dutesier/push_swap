/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:46:51 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/17 11:42:35 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap_b(t_stack *b)
{
	int	temp;

	if (b->top <= 0)
		return (0);
	temp = b->table[b->top];
	b->table[b->top] = b->table[b->top - 1];
	b->table[b->top - 1] = temp;
	ft_putstr_fd("sb\n", 1);
	return (1);
}
