/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alt_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:57:06 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/12 11:11:16 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// idea is push to b always and optimize whats is pushing and where it's pushed to
// Calculate whats more expensive. Rotating A and pushing to b, rotating b for the push a to fit or a mix
// For all elements being pushed.
// We probably want to start by pushing some elements to b

int cob_aux(t_stack *b, int target, int i)
{
	int closest;
	int sec;
	
	closest = 0;
	sec = 0;
	while (i - 1 >= -1)
	{
		if (b->table[i] > target && b->table[i - 1] < target)
		{
			closest = i - 1;
			break ;
		}
		i--;
	}
	i = 0;
	while (i + 1 <= b->top)
	{
		if (b->table[i + 1] > target && b->table[i] < target)
		{
			sec = i;
			break ;
		}
		i++;
	}
	return (ft_min(sec, closest));
}

int cost_of_b(t_stack *b, int target) 
{
	int i;
	int high;
	int low;
	
	i = b->top;
	high = find_highest(b);
	low = find_lowest(b);
	if (b->table[i] < target && target < b->table[0]) 		
		return (i);
	if (b->table[high] < target)
		return (high);
	if (b->table[low] > target)
	{
		if (low == 0)
			return (b->top);
		else
			return (low - 1);
	}
	return (cob_aux(b, target, i));
}

int best_move(t_stack *a, t_stack *b)
{
	int best;
	int lowest;
	int i;
	int best_a;

	i = 0;
	lowest = 2147483647;
	best_a = 0;
	while (i <= a->top)
	{
		best = ft_abs(smart_rotate(b, cost_of_b(b, a->table[i]))) + ft_abs(smart_rotate(a, i));
		if (best < lowest)
		{
			lowest = best;
			best_a = i; 
		}
		i++;
	}
	return (best_a);
}

int do_best(t_stack *a, t_stack *b, int best_a)
{
	int best_b;
	int moves;

	best_b = smart_rotate(b, cost_of_b(b, a->table[best_a]));
	best_a = smart_rotate(a, best_a);
	moves = 0;
	if (best_a < 0 && best_b < 0)
		moves += best_neg(a, b, best_a, best_b);
	else if (best_a > 0 && best_b > 0)
		moves += best_pos(a, b, best_a, best_b);
	else
		moves += best_mix(a, b, best_a, best_b);
	moves += push_b(b, a);
	return (moves);
}

int back_to_a(t_stack *a, t_stack *b)
{
	int i;
	int moves;

	i = b->top;
	moves = i + 1;
	while (-1 < b->top)
	{
		push_a(a, b);
		i--;
	}
	return (moves);
}
