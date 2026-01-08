/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:58:51 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/08 13:26:35 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*a;

	i = 0;
	a = NULL;
	if (!s)
		return (NULL);
	while ((unsigned char)s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			a = (char *) &s[i];
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		a = (char *) &s[i];
	return (a);
}

/*int main(void)
{
	const char *str = "small";
	int c = 'l';
	printf("%s   %s", ft_strrchr(str, c), strrchr(str, c));
	return (0);
}*/