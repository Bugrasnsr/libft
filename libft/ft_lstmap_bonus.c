/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msansar <msansar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:20:03 by msansar           #+#    #+#             */
/*   Updated: 2023/10/20 03:08:14 by msansar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (content == NULL)
			ft_lstclear(&result, del);
		if (content == NULL)
			return (NULL);
		node = ft_lstnew(content);
		if (!node)
		{
			free(content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
