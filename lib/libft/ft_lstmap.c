/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:00:25 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/15 19:47:41 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*new;
	void	*temp;

	new = NULL;
	while (lst)
	{
		temp = (f)(lst->content);
		element = ft_lstnew(temp);
		if (!(element))
		{
			free(temp);
			ft_lstclear(&new, del);
			return (NULL);
		}
		if (new == NULL)
			new = element;
		else
			ft_lstadd_back(&new, element);
		lst = lst->next;
	}
	return (new);
}
