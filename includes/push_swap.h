/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 09:52:45 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/08 13:27:15 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Libraries
# include <libft.h>
# include <limits.h>
# include <stdbool.h>

// Defining stack

typedef struct s_stack
{
	int				value;
	int				index;
	int				action_cost;
	bool			high_cost;
	bool			low_cost;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

#endif

