/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 08:09:25 by mbotelho          #+#    #+#             */
/*   Updated: 2026/01/08 13:24:28 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int main(void)
{
	char *str1 = ft_strdup("Hello");
	char *str2 = ft_strdup("world");
	t_list	*head = ft_lstnew(str1);
	t_list	*n1 = ft_lstnew(str2);
	head->next = n1;
	printf("%d\n", ft_lstsize(head));
	head->next = NULL;
	ft_lstdelone(n1, free);
	printf("%d\n", ft_lstsize(head));
}*/