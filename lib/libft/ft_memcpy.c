/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:25:58 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/16 21:17:38 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (str1 == NULL && str2 == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)str1 + i) = *((unsigned char *)str2 + i);
		i++;
	}
	return (str1);
}
