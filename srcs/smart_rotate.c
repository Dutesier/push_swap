/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:38:24 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/09 17:52:18 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Find best way to rotate an element to the top of the stack
// Returns negative number of moves to get element to top with reverse rotate
// and positive number of moves to get element to top with rotate

int smart_rotate(t_stack *stack, int position)
{
	int to_top;
	int to_bot;

	to_top = stack->top - position;
	to_bot = position + 1; 
	if (to_top < to_bot)
		return (to_top);
	else
		return (-to_bot);
}

int to_top_a(t_stack *stack, int smart)
{
	int i;
	int moves;

	i = 0;
	moves = 0;
	if (smart == 0)
		return (0);
	while (i < smart)
		i += rotate_a(stack);
	if (smart > 0)
		return (i);
	while (i > smart)
		i -= rev_rotate_a(stack);
	return (-i);
}
