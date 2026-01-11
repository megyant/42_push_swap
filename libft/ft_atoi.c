/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:33:23 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/11 16:25:34 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_atoi(const char *nptr)
{
	int		i;
	int		pn;
	long	number;

	i = 0;
	pn = 1;
	number = 0;
	if (!nptr)
		return (0);
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			pn = -pn;
	while (nptr[i] && ft_isdigit(nptr[i]))
		number = number * 10 + (nptr[i++] - '0');
	return (number * pn);
}

/*int main(void)
{
	char *str = "   +1234ab";
	printf("%d\n%d", ft_atoi(str), atoi(str));
	return (0);
}*/