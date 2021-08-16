/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:52:20 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/16 19:12:48 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

/*void stack_printer(t_stack *a, t_stack *b, int size_a, int size_b) // Comment this out
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
			printf("   ");
		if (size_b >= size)
			printf("   %i\n", b->table[size]);
		else
			printf("\n");
		size--;
	}
	printf("\n-   -\na   b\n\n");
	return ;
}*/

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
	//stack_printer(a, b, a->top, b->top);
	int moves = ft_sort(a, b);
	//stack_printer(a, b, a->top, b->top);
	free(a->table);
	free(b->table);
	free(a);
	free(b);
	return (moves);
}

