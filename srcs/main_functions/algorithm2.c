/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:53:46 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/14 11:05:47 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	turk_sort(t_stack	**stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
		pb(stack_a, stack_b);
	if (stack_size(*stack_a) > 3 && !is_sorted(*stack_a))
	pb(stack_a, stack_b);
	
	while (stack_size(stack_a) > 3)
	{
		set_position(stack_a);
		set_position(stack_b);
		find_target_a(*stack_a, *stack_b);
		calculate_cost(*stack_a, *stack_b);
		move_between_stacks(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (*stack_b)
	{
		set_position(*stack_a);
		set_position(*stack_b);
		find_target_b(stack_a, stack_b);
		finish_rotation(stack_a, *stack_a, 'a');
		pa(stack_a, stack_b);
	}
	set_position(*stack_a);
	finish_rotation(stack_a, *stack_a, 'a');
}
