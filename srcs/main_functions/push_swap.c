/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 08:39:53 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/11 16:15:12 by mbotelho         ###   ########.fr       */
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
		return 0;
	stack_a = ft_filter(ac, av);
	if (!stack_a)
		return (0);
	


	print_stack(stack_a);
	free_stack(&stack_a);
	return (0);


/*	int i = -1;
	while (temp[++i])
		printf("%s\n", temp[i]);
	return (0);*/
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
