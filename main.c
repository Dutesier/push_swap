/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:52:20 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/17 13:14:06 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static void	ft_clean(t_stack *a, t_stack *b)
{
	if (a != NULL)
		free(a->table);
	if (b != NULL)
		free(b->table);
	free(a);
	free(b);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	t_stack *x;
	int		moves;

	if (argc <= 1)
		return (0);
	if (error_checker(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	//printf("Initializing a\n");
	a = stackInit(argc - 1);
	//printf("Initializing b\n");
	b = stackInit(argc - 1);
	//printf("Populating a\n");
	x = populate_a(a, argv);
	if (x <= 0)
	{
		ft_putstr_fd("Error\n", 1);
		ft_clean(a, b);
		return (0);
	}
	moves = ft_sort(a, b);
	ft_clean(a, b);
	return (moves);
}
