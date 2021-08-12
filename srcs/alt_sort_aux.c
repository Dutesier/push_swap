/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alt_sort_aux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:37:37 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/12 10:42:04 by dareias-         ###   ########.fr       */
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
	}	// SAME TIME REV ROTATION
	while (best_a++ < 0)
		moves += rev_rotate_a(a);// A REV Rotation
	while (best_b++ < 0)
		moves += rev_rotate_b(b);// b REV rotation
	//stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
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
	}	// SAME TIME ROTATION
	while (best_a-- > 0)
		moves += rotate_a(a);
	while (best_b-- > 0)
		moves += rotate_b(b);
	//stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
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
	//stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
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
	if (low == 0) // 2 3 1
		return (swap_b(b));
	if (low == 1 && high == 0) // 2 1 3
		return (rev_rotate_b(b));
	if (low == 1 && high == 2) // 3 1 2
		return (rev_rotate_b(b) + swap_b(b)); 
	if (low == 2 && high == 0) // 1 2 3
		return (rotate_b(b) + swap_b(b));
	else// 1 3 2 -> 3 2 1 
		return (rotate_b(b));
}

