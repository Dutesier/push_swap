/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:52:20 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/07 20:54:27 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void stack_printer(t_stack *a, int size, char c)
{
	while (0 <= size)
		printf("%i\n", a->table[size--]);
	printf("\n-\n%c\n\n", c);
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
	
	printf("\n--Operations: swap a, push b, push b, swap b--\n");
	stack_printer(a, a->top, 'a'); // -1 for ./swap_push and -1 for array null-indexing
	stack_printer(b, b->top, 'b'); // -1 for ./swap_push and -1 for array null-indexing
	swap_a(a);
	stack_printer(a, a->top, 'a'); // -1 for ./swap_push and -1 for array null-indexing
	stack_printer(b, b->top, 'b'); // -1 for ./swap_push and -1 for array null-indexing
	push_b(b, a);
	stack_printer(a, a->top, 'a'); // -1 for ./swap_push and -1 for array null-indexing
	stack_printer(b, b->top, 'b'); // -1 for ./swap_push and -1 for array null-indexing
	push_b(b, a);
	stack_printer(a, a->top, 'a'); // -1 for ./swap_push and -1 for array null-indexing
	stack_printer(b, b->top, 'b'); // -1 for ./swap_push and -1 for array null-indexing
	swap_b(b);
	stack_printer(a, a->top, 'a'); // -1 for ./swap_push and -1 for array null-indexing
	stack_printer(b, b->top, 'b'); // -1 for ./swap_push and -1 for array null-indexing
	return (0);
}

