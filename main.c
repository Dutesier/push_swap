/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:52:20 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/12 12:25:38 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/*void stack_printer(t_stack *a, t_stack *b, int size_a, int size_b)
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
	int moves = ft_sort(a, b);
	free(a->table);
	free(b->table);
	free(a);
	free(b);
	return (moves);
}

