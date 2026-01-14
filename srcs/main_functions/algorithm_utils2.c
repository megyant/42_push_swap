/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:34:05 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/14 11:10:46 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_both(t_stack **stack_a, t_stack **stack_b, t_stack *cheapest)
{
	while (*stack_a != cheapest && *stack_b != cheapest->target)
	{
		rr(stack_a, stack_b);
	}
}

void	revrot_both(t_stack **stack_a, t_stack **stack_b, t_stack *cheapest)
{
	while (*stack_a != cheapest && *stack_b != cheapest->target)
	{
		rrr(stack_a, stack_b);
	}
}

void	finish_rotation(t_stack **stack, t_stack *top_node, char name)
{
	while (*stack != top_node)
	{
		if (top_node->upper_half)
		{
			if (name == 'a')
				ra(stack);
			else if (name == 'b')
				rb(stack);
		}
		else
		{
			if (name == 'a')
				rra(stack);
			else if (name == 'b')
				rrb(stack);
		}
	}
}

int	is_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}