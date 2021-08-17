/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:39:41 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/17 11:42:24 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap_a(t_stack *a)
{
	int	temp;

	if (a->top <= 0)
		return (0);
	temp = a->table[a->top];
	a->table[a->top] = a->table[a->top - 1];
	a->table[a->top - 1] = temp;
	ft_putstr_fd("sa\n", 1);
	return (1);
}
