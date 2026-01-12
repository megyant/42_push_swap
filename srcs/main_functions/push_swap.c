/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 08:39:53 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/12 16:25:47 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	(void)stack_b;
	if (ac < 2 || !av[1][0])
		return (0);
	stack_a = ft_filter(ac, av);
	if (!stack_a)
		return (0);

	
	test_setup(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}


void	print_stack(t_stack *stack)
{
	t_stack	*last;

	if (!stack)
	{
		ft_printf("Stack is empty\n");
		return ;
	}
	ft_printf("Forward: ");
	while (stack)
	{
		ft_printf("%d ", stack->value);
		if (!stack->next)
			last = stack;
		stack = stack->next;
	}
	ft_printf("\nBackward: ");
	while (last)
	{
		ft_printf("%d ", last->value);
		last = last->prev;
	}
	ft_printf("\n");
}


void test_setup(t_stack **a, t_stack **b)
{
	t_stack *tmp;
    ft_printf("--- STARTING TEST ---\n");
    
	tmp = *a;
    // 1. Index the stack
    index_stack(a);
	ft_printf("Stack A indexed.\n");

	
	while (tmp)
	{
		ft_printf("%d\n", tmp->index);
		tmp = tmp->next;
	}
	ft_printf("Printed indexes.\n");

    // 2. Move some nodes to B
    push_b(a, b);
    push_b(a, b);
    ft_printf("Pushed 2 nodes to B.\n");

    // 3. Perform rotations and swaps
    rot_a(a);     // Top to bottom
    swap_b(b);     // Swap top two in B
    revrot_a(a);    // Bottom to top
    ft_printf("Rotated A and Swapped B.\n");

    // 4. Push back to A
    push_a(a, b);
    ft_printf("Pushed 1 node back to A.\n");

    // 5. Final Print
    ft_printf("\nFINAL STATE STACK A:\n");
    print_stack(*a); // Use your existing print function
    
    ft_printf("\nFINAL STATE STACK B:\n");
    print_stack(*b);
    
    ft_printf("--- TEST COMPLETE ---\n");
}
