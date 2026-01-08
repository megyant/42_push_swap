/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 08:39:53 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/08 14:47:11 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	int		i;
	int		n;
	
	stack_a = NULL;
	i = 0;
	if (ac < 2)
		return (1);
	else if (ac == 2)
		stack_a = ft_filter(av);
	else
	{
		while (++i < ac)
		{
			n = ft_atoi(av[i]);
			ft_add_back(&stack_a, ft_stack_new(n));
		}
	}
	if (!stack_a || ft_checkup(stack_a))
		ft_error();
	if (!is_sorted(stack_a))
		ft_sort(&stack_a);
	free_stack(&stack_a);
	return(0);
}

t_stack	*ft_filter(char **av)
{
	t_stack *a;
	char	**filtered;
	int		i;
	int		n;

	a = NULL;
	i = -1;
	filtered = ft_split(av[1], ' ');
	while (filtered[++i])
	{
		n = ft_atoi(filtered[i]);
		ft_add_back(&a, ft_stack_new(n));
	}
	ft_freeing(filtered);
	return(a);
}