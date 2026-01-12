/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 09:52:45 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/12 16:18:36 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Libraries
# include <libft.h>

// Defining stack

typedef struct s_stack
{
	long			value;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

// Reading the input
t_stack				*ft_filter(int ac, char **av);
void				index_stack(t_stack	**stack);

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

// Movements

// Push
void				push(t_stack **dest, t_stack **src);
void				push_a(t_stack **stack_a, t_stack **stack_b);
void				push_b(t_stack **stack_a, t_stack **stack_b);

// Reverse Rotate
void				revrot(t_stack **stack);
void				revrot_a(t_stack **stack_a);
void				revrot_b(t_stack **stack_b);
void				revrot_r(t_stack **stack_a, t_stack **stack_b);

// Rotate
void				rotate(t_stack **stack);
void				rot_a(t_stack **stack_a);
void				rot_b(t_stack **stack_b);
void				rot_r(t_stack **stack_a, t_stack **stack_b);

// Swap
void				swap_stacks(t_stack **stack);
void				swap_a(t_stack **stack_a);
void				swap_b(t_stack **stack_b);
void				swap_s(t_stack **stack_a, t_stack **stack_b);

// testing
void				print_stack(t_stack *stack);
void test_setup(t_stack **a, t_stack **b);

#endif
