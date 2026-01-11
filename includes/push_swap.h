/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 09:52:45 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/11 16:22:27 by mbotelho         ###   ########.fr       */
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
t_stack	*ft_filter(int ac, char **av);


// Error handling
int 	is_valid_atoi(char *str);
int		is_duplicate(t_stack *stack, int nb);
void	free_stack(t_stack	**stack);
void	ft_error(t_stack **stack, char **args, int ac);
void	ft_free(char **str);

// Building stack
t_stack	*stack_new(int value);
t_stack	*stack_last(t_stack *lst);
void	stack_add_back(t_stack	**stack, t_stack *new);

// testing
void	print_stack(t_stack *stack);

#endif

