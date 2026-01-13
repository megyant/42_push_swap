/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:56:21 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/13 11:37:29 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	find_target_a(t_stack *stack_a, t_stack *stack_b)
{
	long	closest;
	t_stack	*target;
	t_stack *current_a;
	t_stack	*current_b;

	if (!stack_a || !stack_b)
		return ;
	current_a = stack_a;
	while (current_a)
	{
		target = NULL;
		closest = -2147483648;
		current_b = stack_b;
		while (current_b)
		{
			if ((current_b->index < current_a->index) && (current_b->index > closest))
			{
				closest = current_b->index;
				target = current_b;
			}
			current_b = current_b->next;
		}
		if (!target)
			current_a->target = find_max(stack_b);
		else
			current_a->target = target;
		current_a = current_a->next;
	}
}