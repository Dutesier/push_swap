/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:39:41 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/07 20:16:09 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** 
** sa : Swap a - swap the first 2 elements at top of stack a.
** Do nothing if there is only one or no elements.
**
*/

int swap_a(t_stack *a)
{
	int temp;

	if (a->top <= 0)
		return (0);
	temp = a->table[a->top];
	a->table[a->top] = a->table[a->top - 1];
	a->table[a->top - 1] = temp;
	return (1);
}

