/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_upper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:49:59 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/08 13:25:25 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putnbr_base_upper(long n, int base)
{
	int		count;
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr_base_upper(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar(hexa[n]));
	else
	{
		count = ft_putnbr_base_upper(n / base, base);
		return (count + ft_putnbr_base_upper(n % base, base));
	}
}
