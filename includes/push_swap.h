/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:06:09 by dareias-          #+#    #+#             */
/*   Updated: 2021/08/11 23:48:56 by dareias-         ###   ########.fr       */
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

// REMOVE THIS!!!!!!!!
void stack_printer(t_stack *a, t_stack *b, int size_a, int size_b);

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
int ft_sort_median(t_stack *a, t_stack *b, int u, int l);

int is_sorted_i(t_stack *stack);
int is_sorted_d(t_stack *stack);


int find_highest(t_stack *stack);
int find_lowest(t_stack *stack);

int push_half(t_stack *sending, t_stack *receiving, char push_to);
int find_median(t_stack *stack, int i, int u, int l);
int pos_from_nbr(t_stack *stack, int nbr);
int div_by_median(t_stack *a, t_stack *b, int median);
int div_after_median(t_stack *a, t_stack *b, int median);


int sort_small(t_stack *a, t_stack *b);
int sort_three(t_stack *a, t_stack *b);
int sort_five(t_stack *a, t_stack *b);

int smart_rotate(t_stack *stack, int position);
int to_top_a(t_stack *stack, int smart);
int sort_from_b(t_stack *a, t_stack *b);
int ft_reorganize(t_stack *a);
int ft_reorganize_b(t_stack *b);

int ft_min(int a, int b);
int ft_smaller_than(t_stack *stack, int bench);
int ft_abs(int x);

int sort_big(t_stack *a, t_stack *b);
int sort_huge(t_stack *a, t_stack *b, int u, int l);
int ft_sort_quarters(t_stack *a, t_stack *b, int u, int l);

int quarter_org(t_stack *a, t_stack *b);
int div_interval(t_stack *a, t_stack *b, int u, int l);


int back_to_a(t_stack *a, t_stack *b);
int do_best(t_stack *a, t_stack *b, int best_a);
int best_move(t_stack *a, t_stack *b);
int cost_of_b(t_stack *b, int target);
int cost_of_a(t_stack *a, int upper, int lower);
int alt_sort(t_stack *a, t_stack *b);
int best_mix(t_stack *a, t_stack *b, int best_a, int best_b);
int best_pos(t_stack *a, t_stack *b, int best_a, int best_b);
int best_neg(t_stack *a, t_stack *b, int best_a, int best_b);
int three_b(t_stack *b);

#endif

