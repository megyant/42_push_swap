/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 08:39:53 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/07 21:07:31 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a
	t_stack	*stack_b
	
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1 || (ac == 2 && !argv[1][0]))
		return (1);
	else if (ac == 2)
		argv = split(av[1], ' ');
}