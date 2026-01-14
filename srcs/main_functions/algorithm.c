/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:56:21 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/14 14:27:56 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// closest should start as -2147483648
void	find_target_a(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*target;
	t_stack	*current_b;
	long	closest;

	while (stack_a)
	{
		closest = -2147483649;
		current_b = stack_b;
		target = NULL;
		while (current_b)
		{
			if ((current_b->index < stack_a->index)
				&& (current_b->index > closest))
			{
				closest = current_b->index;
				target = current_b;
			}
			current_b = current_b->next;
		}
		if (!target)
			stack_a->target = find_max(stack_b);
		else
			stack_a->target = target;
		stack_a = stack_a->next;
	}
}

void	find_target_b(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*target;
	t_stack	*current_a;
	long	closest;

	while (stack_b)
	{
		closest = 2147483648;
		current_a = stack_a;
		target = NULL;
		while (current_a)
		{
			if ((current_a->index > stack_b->index)
				&& (current_a->index < closest))
			{
				closest = current_a->index;
				target = current_a;
			}
			current_a = current_a->next;
		}
		if (!target)
			stack_b->target = find_min(stack_a);
		else
			stack_b->target = target;
		stack_b = stack_b->next;
	}
}

void	calculate_cost(t_stack *stack_a, t_stack *stack_b)
{
	long	size_a;
	long	size_b;
	long	cost_a;
	long	cost_b;

	size_a = stack_size(stack_a);
	size_b = stack_size(stack_b);
	if (!stack_a)
		return ;
	while (stack_a)
	{
		if (stack_a->upper_half)
			cost_a = stack_a->position;
		else
			cost_a = size_a - stack_a->position;
		if (stack_a->target->upper_half)
			cost_b = stack_a->target->position;
		else
			cost_b = size_b - stack_a->target->position;
		if (stack_a->upper_half && stack_a->target->upper_half)
			stack_a->push_cost = max_cost(cost_a, cost_b);
		else
			stack_a->push_cost = cost_a + cost_b;
		stack_a = stack_a->next;
	}
}

t_stack	*get_cheapest(t_stack *stack)
{
	t_stack	*cheap_node;

	if (!stack)
		return (NULL);
	cheap_node = stack;
	while (stack)
	{
		if (stack->push_cost < cheap_node->push_cost)
			cheap_node = stack;
		stack = stack->next;
	}
	return (cheap_node);
}

void	move_between_stacks(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheap_a;

	cheap_a = get_cheapest(*stack_a);
	if (cheap_a->upper_half && cheap_a->target->upper_half)
		rotate_both(stack_a, stack_b, cheap_a);
	else if (!cheap_a->upper_half && !cheap_a->target->upper_half)
		revrot_both(stack_a, stack_b, cheap_a);
	finish_rotation(stack_a, cheap_a, 'a');
	finish_rotation(stack_b, cheap_a->target, 'b');
	pb(stack_a, stack_b);
}
