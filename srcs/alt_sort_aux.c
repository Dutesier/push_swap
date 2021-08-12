/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alt_sort_aux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:37:37 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/12 10:55:24 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int best_neg(t_stack *a, t_stack *b, int best_a, int best_b)
{
	int moves;

	moves = 0;
	while (best_a < 0 && best_b < 0)
	{
		moves += rev_rotate_rrr(a, b);
		best_a++;
		best_b++;
	}
	while (best_a++ < 0)
		moves += rev_rotate_a(a);
	while (best_b++ < 0)
		moves += rev_rotate_b(b);
	return (moves);
}

int best_pos(t_stack *a, t_stack *b, int best_a, int best_b)
{
	int moves;
	
	moves = 0;
	while (best_a > 0 && best_b > 0)
	{
		moves += rotate_rr(a, b);
		best_a--;
		best_b--;
	}
	while (best_a-- > 0)
		moves += rotate_a(a);
	while (best_b-- > 0)
		moves += rotate_b(b);
	return (moves);
}

int best_mix(t_stack *a, t_stack *b, int best_a, int best_b)
{
	int moves;

	moves = 0;
	while (best_a < 0)
	{
		moves += rev_rotate_a(a);
		best_a++;
	}
	while (best_a > 0)
	{
		moves += rotate_a(a);
		best_a--;
	}
	while (best_b < 0)
	{
		moves += rev_rotate_b(b);
		best_b++;
	}
	while (best_b > 0)
	{
		moves += rotate_b(b);
		best_b--;
	}
	return (moves);
}

int alt_sort(t_stack *a, t_stack *b)
{
	int moves;

	moves = push_b(b, a) + push_b(b, a) + push_b(b, a);
	moves += three_b(b);
	while (a->top >= 0)
		moves += do_best(a, b, best_move(a, b));
	if (is_sorted_d(b) != 0)
		moves += ft_reorganize_b(b);
	if (is_sorted_d(b) == 0)
		moves += back_to_a(a, b);
	return (moves);
}

int three_b(t_stack *b)
{
	int high;
	int low;

	if (is_sorted_d(b) == 0)
		return (0);
	high = find_highest(b);
	low = find_lowest(b);
	if (low == 0)
		return (swap_b(b));
	if (low == 1 && high == 0) 
		return (rev_rotate_b(b));
	if (low == 1 && high == 2)
		return (rev_rotate_b(b) + swap_b(b)); 
	if (low == 2 && high == 0) 
		return (rotate_b(b) + swap_b(b));
	else
		return (rotate_b(b));
}

