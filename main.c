/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:52:20 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/17 11:44:35 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		moves;

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
	moves = ft_sort(a, b);
	free(a->table);
	free(b->table);
	free(a);
	free(b);
	return (moves);
}
