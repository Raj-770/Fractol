/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:33:11 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/08 10:17:10 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	str2_length;

	i = 0;
	str2_length = 0;
	if (n != 0)
	{
		while (str2[i] && i < (n - 1))
		{
			*(str1 + i) = *(str2 + i);
			i++;
		}
		*(str1 + i) = '\0';
	}
	while (str2[str2_length] != '\0')
	{
		str2_length++;
	}
	return (str2_length);
}
