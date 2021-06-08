/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:57:29 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 10:16:32 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int rev_rotate_a(t_stack *a)
{
	int temp;
	int i;

	i = 0;
	temp = a->table[0];
	while (i < a->top)
	{
		a->table[i] = a->table[(i + 1)];
		i++;
	}
	a->table[a->top] = temp;
	return (1);
}

