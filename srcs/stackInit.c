/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackInit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:41:17 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/17 11:41:45 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*stackInit(unsigned int size)
{
	t_stack	*stack;

	stack = (t_stack*)malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	stack->size = size;
	stack->top = -1;
	stack->table = (int *)malloc(size * sizeof(int));
	if (!stack->table)
		return (0);
	return (stack);
}
