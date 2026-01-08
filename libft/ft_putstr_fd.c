/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:41:09 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/08 13:25:40 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s || fd < 0)
		return ;
	i = -1;
	while (s[++i])
	{
		write(fd, &s[i], 1);
	}
}

/*int	main(void)
{
	ft_putstr_fd("Hello, world", 1);
	ft_putstr_fd("\n", 1);
	return (0);
}*/