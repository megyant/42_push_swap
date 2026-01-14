/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:53:46 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/14 14:28:01 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	turk_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
		pb(stack_a, stack_b);
	if (stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
		pb(stack_a, stack_b);
	while (stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
	{
		set_position(*stack_a);
		set_position(*stack_b);
		find_target_a(*stack_a, *stack_b);
		calculate_cost(*stack_a, *stack_b);
		move_between_stacks(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (*stack_b)
	{
		set_position(*stack_a);
		set_position(*stack_b);
		find_target_b(*stack_a, *stack_b);
		finish_rotation(stack_a, (*stack_b)->target, 'a');
		pa(stack_a, stack_b);
	}
	set_position(*stack_a);
	finish_rotation(stack_a, find_min(*stack_a), 'a');
}

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	long	size_a;

	size_a = stack_size(*stack_a);
	if (size_a < 2 || is_sorted(*stack_a))
		return ;
	if (size_a == 2)
		sa(stack_a);
	else if (size_a == 3)
		sort_three(stack_a);
	else
		turk_sort(stack_a, stack_b);
}
