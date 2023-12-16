/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:40:56 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/14 14:12:07 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (str1 == str2 || !n)
		return (str1);
	i = 0;
	if (str1 < str2)
	{
		while (i < n)
		{
			*((char *)str1 + i) = *((char *)str2 + i);
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			*((char *)str1 + n) = *((char *)str2 + n);
		}
	}
	return (str1);
}
