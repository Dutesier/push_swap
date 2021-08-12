/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:06:09 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/12 11:35:52 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

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

int ft_sort(t_stack *a, t_stack *b);

int is_sorted_i(t_stack *stack);
int is_sorted_d(t_stack *stack);


int find_highest(t_stack *stack);
int find_lowest(t_stack *stack);
int pos_from_nbr(t_stack *stack, int nbr);

int sort_small(t_stack *a, t_stack *b);
int sort_three(t_stack *a);
int sort_five(t_stack *a, t_stack *b);

int smart_rotate(t_stack *stack, int position);
int to_top_a(t_stack *stack, int smart);
int ft_reorganize(t_stack *a);
int ft_reorganize_b(t_stack *b);

int ft_min(int a, int b);
int ft_smaller_than(t_stack *stack, int bench);
int ft_abs(int x);

int back_to_a(t_stack *a, t_stack *b);
int do_best(t_stack *a, t_stack *b, int best_a);
int best_move(t_stack *a, t_stack *b);
int cost_of_b(t_stack *b, int target);
int cob_aux(t_stack *b, int target, int i);
int alt_sort(t_stack *a, t_stack *b);
int best_mix(t_stack *a, t_stack *b, int best_a, int best_b);
int best_pos(t_stack *a, t_stack *b, int best_a, int best_b);
int best_neg(t_stack *a, t_stack *b, int best_a, int best_b);
int three_b(t_stack *b);

#endif

