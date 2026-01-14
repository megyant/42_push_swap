/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 09:52:45 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/14 11:11:24 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Libraries
# include <libft.h>
# include <stdbool.h>

// Defining stack

typedef struct s_stack
{
	long			value;
	long			index;
	long			position;
	long			push_cost;
	bool			upper_half;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

// Reading the input
t_stack				*ft_filter(int ac, char **av);
void				index_stack(t_stack **stack);

// Error handling
int					is_valid_atoi(char *str);
int					is_duplicate(t_stack *stack, int nb);
void				free_stack(t_stack **stack);
void				ft_error(t_stack **stack, char **args, int ac);
void				ft_free(char **str);

// Building stack
t_stack				*stack_new(int value);
t_stack				*stack_last(t_stack *lst);
void				stack_add_back(t_stack **stack, t_stack *new_node);
long				stack_size(t_stack *stack);

// Algorithm utils
t_stack				*find_max(t_stack *stack);
t_stack				*find_min(t_stack *stack);
void				set_position(t_stack *stack);
long				max_cost(long cost1, long cost2);

// Algorithm utils 2
void				finish_rotation(t_stack **stack, t_stack *top_node,
						char name);
void				rotate_both(t_stack **stack_a, t_stack **stack_b,
						t_stack *cheapest);
void				revrot_both(t_stack **stack_a, t_stack **stack_b,
						t_stack *cheapest);
int					is_sorted(t_stack *stack);

// Algorithm
void				find_target_a(t_stack *stack_a, t_stack *stack_b);
void				find_target_b(t_stack *stack_a, t_stack *stack_b);
void				calculate_cost(t_stack *stack_a, t_stack *stack_b);
t_stack				*get_cheapest(t_stack *stack);
void				move_between_stacks(t_stack **stack_a, t_stack **stack_b);

// Movements

// Push
void				push(t_stack **dest, t_stack **src);
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);

// Reverse Rotate
void				revrot(t_stack **stack);
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);

// Rotate
void				rotate(t_stack **stack);
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);

// Swap
void				swap_stacks(t_stack **stack);
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);

// testing
void				print_stack(t_stack *stack);
void				test_setup(t_stack **a, t_stack **b);

#endif
