/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_huge.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:04:59 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/11 12:20:42 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_huge(t_stack *a, t_stack *b, int u, int l)
{
	int moves;
	int median;
	int quarter;
	int eighth;

	moves = 0;

	median = find_median(a, 0, u, l);
	quarter = find_median(a, 0, median, l);
	eighth = find_median(a, 0, quarter, l);

	moves += div_interval(a, b, eighth, l) + quarter_org(a, b);
	moves += div_interval(a, b, quarter, eighth) + quarter_org(a, b);
	
	eighth = find_median(a, 0, median, quarter);

	moves += div_interval(a, b, eighth, quarter) + quarter_org(a, b);
	moves += div_interval(a, b, median, eighth) + quarter_org(a, b);

	quarter = find_median(a, 0, u, median);
	eighth = find_median(a, 0, quarter, median);

	moves += div_interval(a, b, eighth, median) + quarter_org(a, b);
	moves += div_interval(a, b, quarter, eighth) + quarter_org(a, b);

	eighth = find_median(a, 0, u, quarter);
	
	moves += div_interval(a, b, eighth, quarter) + quarter_org(a, b);
	moves += div_interval(a, b, u, eighth) + quarter_org(a, b);
	return (moves);
}

