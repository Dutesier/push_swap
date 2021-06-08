/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_time.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:29:37 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 10:35:13 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int swap_ss(t_stack *a, t_stack *b)
{
	return (swap_a(a) + swap_b(b));
}

int rotate_rr(t_stack *a, t_stack *b)
{
	return (rotate_a(a) + rotate_b(b));
}

int rev_rotate_rrr(t_stack *a, t_stack *b)
{
	return (rev_rotate_a(a) + rev_rotate_b(b));
}

