/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:38:13 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/17 11:40:39 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sort(t_stack *a, t_stack *b)
{
	if (is_sorted_i(a) != 0)
	{
		if (a->size < 6)
			return (sort_small(a, b));
		else
			return (alt_sort(a, b));
	}
	else
		return (0);
}
