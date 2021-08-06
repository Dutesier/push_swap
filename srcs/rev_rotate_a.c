/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:57:29 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/06 16:35:11 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int rev_rotate_a(t_stack *a)
{
	int temp;
	int i;

	if (a->top < 0)
		return (0);
	i = 0;
	temp = a->table[0];
	while (i < a->top)
	{
		a->table[i] = a->table[(i + 1)];
		i++;
	}
	a->table[a->top] = temp;
	ft_putstr_fd("rra\n", 1);
	return (1);
}

