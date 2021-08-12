/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alt_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:57:06 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/12 10:42:59 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// idea is push to b always and optimize whats is pushing and where it's pushed to
// Calculate whats more expensive. Rotating A and pushing to b, rotating b for the push a to fit or a mix
// For all elements being pushed.
// We probably want to start by pushing some elements to b

int cost_of_a(t_stack *a, int upper, int lower) // How far is the first elem
{
	int i;
	int closest;
	int sec;

	i = a->top;
	while (i >= -1)
	{
		if (a->table[i] < upper && a->table[i] > lower)
		{
			closest = i;
			break ;
		}
		i--;
	}
	i = 0;
	while (i <= a->top)
	{
		if (a->table[i] < upper && a->table[i] > lower)
		{
			sec = i;
			break ;
		}
		i++;
	}
	return (ft_min(sec, closest));
}

int cost_of_b(t_stack *b, int target) // How far is the first interval that a fits into  i - 1
{
	int i;
	int sec;
	int closest;
	int high;
	int low;
	
	i = b->top;
	closest = 0;
	sec = 0;
	high = find_highest(b);
	low = find_lowest(b);
	//printf("\nb->table[%i] = %i ,  target = %i\n", i, b->table[i], target);
	if (b->table[i] < target && target < b->table[0]) // if the item in a is bigger than the top of b and smaller than the bot of b 		
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
	while (i - 1 >= -1)
	{
		if (b->table[i] > target && b->table[i - 1] < target)
		{
			closest = i - 1;
			break ;
		}
		i--;
	} // i = 3 -> checks [3] > target > [2] -> i = 2 -> i = 1 -> i = 0
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
	//printf("\n Cost of b: Closest = %i , Sec = %i \n", closest, sec);
	return (ft_min(sec, closest));
}

// With best move I want to check what is the lowest: a, b or a mix of a + b
// To check for mix I want to see if the increase in the cost of A would justify the change in cost of B
// For every a right now calculate cost a + cost of b (for that a)
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
		best = ft_abs(smart_rotate(b, cost_of_b(b, a->table[i]))) + ft_abs(smart_rotate(a, i));//what would i need to change in b so that this element would fit
		//printf("\nbest for %i = ft_abs(smart_rotate(a, i) + ft_abs(smart_rotate(b, cost_of_b(b, a->table[i]))) ------ %i + %i\n", a->table[i], ft_abs(smart_rotate(a,i)), ft_abs(smart_rotate(b, cost_of_b(b, a->table[i]))));//what would i need to change in b so that this element would fit

		if (best < lowest)
		{
			lowest = best;
			best_a = i; // i'll smart_rotate this a (a->table[i]) if need be 
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
	//printf("\nBest move: a - %i , b - %i\n", best_a, best_b);	
	//stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
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
