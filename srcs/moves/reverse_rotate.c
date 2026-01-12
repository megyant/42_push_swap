/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:44:07 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/12 16:55:49 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	revrot(t_stack **stack)
{
	t_stack	*tail;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tail = stack_last(*stack);
	tail->prev->next = NULL;
	tail->next = *stack;
	(*stack)->prev = tail;
	tail->prev = NULL;
	*stack = tail;
}

void	revrot_a(t_stack **stack_a)
{
	revrot(stack_a);
	write(1, "rra\n", 4);
}

void	revrot_b(t_stack **stack_b)
{
	revrot(stack_b);
	write(1, "rrb\n", 4);
}

void	revrot_r(t_stack **stack_a, t_stack **stack_b)
{
	revrot(stack_a);
	revrot(stack_b);
	write(1, "rrr\n", 4);
}
