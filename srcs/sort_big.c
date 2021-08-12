/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:37:33 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/11 16:55:10 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_big(t_stack *a, t_stack *b)
{
	//int high;
	//int low;

	//high = find_highest(a);
	//low = find_lowest(a);
	//if (a->size < 100)
	//	return (ft_sort_median(a, b, high, low));
	//if (a->size >= 100 && a->size < 500)
	//	return (ft_sort_quarters(a, b, a->table[high], a->table[low]));
	//else
		return (alt_sort(a, b));
}

