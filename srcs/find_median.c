/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:13:05 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/11 11:10:48 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int find_median(t_stack *s, int i, int u, int l)
{
	int j;
	int higher;
	int median;

	median = 0;
	while (i <= s->top)
	{
		j = 0;
		higher = 0;
		while (j <= s->top)
		{
			if ((s->table[j] > s->table[i]) && (s->table[i] < u) && (s->table[i] >= l))
				higher++;
			j++;
		}
		if (higher == (s->top / 2))
			median = s->table[i];
		i++;
	}
	return (median);
}
