/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:52:20 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/09 18:20:51 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void stack_printer(t_stack *a, t_stack *b, int size_a, int size_b)
{
	int size;

	printf("\n");
	if (size_a >= size_b)
		size = size_a;
	else
		size = size_b;
	while (0 <= size)
	{
		if (size_a >= size)
			printf("%i", a->table[size]);
		else
			printf(" ");
		if (size_b >= size)
			printf(" %i\n", b->table[size]);
		else
			printf("\n");
		size--;
	}
	printf("\n- -\na b\n\n");
	return ;
}

int main(int argc, char *argv[])
{
	t_stack *a;

	t_stack *b;
	
	if (argc <= 1)
		return (0);
	a = stackInit(argc - 1);
	b = stackInit(argc - 1);
	a = populate_a(a, argv);
	if (a == 0 || error_checker(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	
	//stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
	
/*	swap_a(a);
	printf("Swap a\n");
	stack_printer(a, b, a->top, b->top);
	
	push_b(b, a);
	printf("Push b\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
	
	push_b(b, a);
	printf("Push b\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
	
	swap_b(b);
	printf("Swap b\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
	
	rotate_a(a);
	printf("Rotate a\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
	
	rotate_b(b);
	printf("Rotate b\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
	
	rev_rotate_a(a);
	printf("Rev Rotate a\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
	
	rev_rotate_b(b);
	printf("Rev Rotate b\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
	
	swap_ss(a, b);
	printf("Swap ss\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing
	
	rotate_rr(a, b);
	printf("Rotate rr\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing

	rev_rotate_rrr(a, b);
	printf("Rev Rotate rrr\n");
	stack_printer(a, b, a->top, b->top); // -1 for ./swap_push and -1 for array null-indexing*/

	int median = find_median(a, 0, 0);
	//printf("\nMedian: %i\n", median);
	int moves = ft_sort(a, b);
	//stack_printer(a, b, a->top, b->top);
	printf("Moves: %i\n", moves);	
	/*int higha = find_highest(a);
	int lowa = find_lowest(a);
	int highb = find_highest(b);
	int lowb = find_lowest(b);
	printf("Highest A: %i, Lowest A: %i\n", higha, lowa);
	printf("Highest B: %i, Lowest B: %i\n", highb, lowb);
*/
	return (moves);
}

