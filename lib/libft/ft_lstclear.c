/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:41:30 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/14 16:35:08 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!*lst)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		(*lst) = next;
	}
}
