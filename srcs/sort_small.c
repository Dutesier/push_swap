/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:12:37 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/16 19:11:50 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_small(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		return(rotate_a(a));
	if (a->size == 3)
		return (sort_three(a));
	else
		return (sort_five(a, b));
}

int sort_three(t_stack *a)
{
	int high;
	int low;

	high = find_highest(a);
	low = find_lowest(a);
	if (is_sorted_i(a) == 0)
		return (0);
	if (high == 0) 
		return (swap_a(a));
	if (high == 1 && low == 0)
		return (rev_rotate_a(a));
	if (high == 1 && low == 2) 
		return (rev_rotate_a(a) + swap_a(a)); 
	if (high == 2 && low == 0) 
		return (rotate_a(a) + swap_a(a));
	else
		return (rotate_a(a));
}

int sort_five(t_stack *a, t_stack *b)
{
	int low;
	int i;

	low = find_lowest(a);
	if (a->size == 4)
	{
		i = to_top_a(a, smart_rotate(a, low)) + push_b(b, a);
		return (i + sort_three(a) + push_a(a, b));
	}
	else
	{
		i = to_top_a(a, smart_rotate(a, low)) + push_b(b, a);
		low = find_lowest(a);
		i += to_top_a(a, smart_rotate(a, low)) + push_b(b, a);
		return (i + sort_three(a) + push_a(a, b) + push_a(a, b));
	}
}
