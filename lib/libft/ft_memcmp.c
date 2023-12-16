/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:04:05 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/08 10:13:34 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (str1 == str2)
	{
		return (0);
	}
	while (i < n)
	{
		if (*((unsigned char *)str1 + i) != *((unsigned char *)str2 + i))
		{
			return (*((unsigned char *)str1 + i)
				- *((unsigned char *)str2 + i));
			break ;
		}
		i++;
	}
	return (0);
}
