/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 08:56:01 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/13 17:33:21 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*find_max(t_stack *stack)
{
	t_stack	*max;

	if (!stack)
		return (NULL);
	max = stack;
	while (stack)
	{
		if (stack->index > max->index)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

t_stack	*find_min(t_stack *stack)
{
	t_stack	*min;

	if (!stack)
		return (NULL);
	min = stack;
	while (stack)
	{
		if (stack->index < min->index)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

void	set_position(t_stack *stack)
{
	long	size;
	long	median;
	long	i;

	if (!stack)
		return ;
	size = stack_size(stack);
	median = size/2;
	i = 0;
	while (stack)
	{
		stack->position = i;
		if (i <= median)
			stack->upper_half = true;
		else
			stack->upper_half = false;
		stack = stack->next;
		i++;
	}
}

long	max_cost(cost1, cost2)
{
	if (cost1 > cost2)
		return (cost1);
	return (cost2);
}
