/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:06:09 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 13:05:01 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include <stdio.h> // REMOVE THIS!!!!!!!!!!!!!!!!!

typedef struct s_stack
{
	int			top;
	unsigned	size;
	int			*table;
}				t_stack;

t_stack *stackInit(unsigned size);
t_stack *populate_a(t_stack *stack, char *population[]);
int swap_a(t_stack *a);
int swap_b(t_stack *b);
int push_a(t_stack *a, t_stack *b);
int push_b(t_stack *b, t_stack *a);
int rotate_a(t_stack *a);
int rotate_b(t_stack *b);
int rev_rotate_a(t_stack *a);
int rev_rotate_b(t_stack *b);
int swap_ss(t_stack *a, t_stack *b);
int rotate_rr(t_stack *a, t_stack *b);
int rev_rotate_rrr(t_stack *a, t_stack *b);
int error_checker(int argc, char *argv[]);


#endif

