/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:28:56 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/12 13:35:35 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_filter(int ac, char **av)
{
	char	**args;
	long	value;
	t_stack	*stack_a;
	int		i;

	stack_a = NULL;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av + 1;
	i = -1;
	while (args[++i])
	{
		if (!is_valid_atoi(args[i]))
			ft_error(&stack_a, args, ac);
		value = ft_atoi(args[i]);
		if (value < -2147483648 || value > 2147483647)
			ft_error(&stack_a, args, ac);
		if (is_duplicate(stack_a, (int)value))
			ft_error(&stack_a, args, ac);
		stack_add_back(&stack_a, stack_new((int)value));
	}
	if (ac == 2)
		ft_free(args);
	return (stack_a);
}
