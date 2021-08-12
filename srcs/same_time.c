/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_time.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:29:37 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/12 09:21:44 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int swap_ss(t_stack *a, t_stack *b)
{
	return (swap_a(a) + swap_b(b));
}

int rotate_rr(t_stack *a, t_stack *b)
{
	int temp;
	int i;
	int x;

	if (a->top < 0 && b->top < 0)
		return (0);
	temp = a->table[a->top];
	i = a->top;
	x = i - 1;
	while (i > 0)
		a->table[i--] = a->table[x--];
	a->table[i] = temp;
	temp = b->table[b->top];
	i = b->top;
	x = i - 1;
	while (i > 0)
		b->table[i--] = b->table[x--];
	b->table[i] = temp;
	ft_putstr_fd("rr\n", 1);
	return (1);
}

int rev_rotate_rrr(t_stack *a, t_stack *b)
{
	int temp;
	int i;

	if (a->top < 0 && b->top < 0)
		return (0);
	i = 0;
	temp = a->table[0];
	while (i < a->top)
	{
		a->table[i] = a->table[(i + 1)];
		i++;
	}
	a->table[a->top] = temp;
	i = 0;
	temp = b->table[0];
	while (i < b->top)
	{
		b->table[i] = b->table[(i + 1)];
		i++;
	}
	b->table[b->top] = temp;
	ft_putstr_fd("rrr\n", 1);
	return (1);
}

