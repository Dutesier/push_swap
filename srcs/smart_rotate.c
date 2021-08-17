/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:38:24 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/17 11:37:35 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	smt_r(t_stack *stack, int position)
{
	int	to_top;
	int	to_bot;

	to_top = stack->top - position;
	to_bot = position + 1;
	if (to_top < to_bot)
		return (to_top);
	else
		return (-to_bot);
}

int	to_top_a(t_stack *stack, int smart)
{
	int	i;

	i = 0;
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
