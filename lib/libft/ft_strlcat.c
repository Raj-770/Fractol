/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:19:51 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/14 16:05:20 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	str1_len;
	size_t	str2_len;
	size_t	offset;

	i = 0;
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	offset = str1_len;
	if (n == 0 || n <= str1_len)
		return (n + str2_len);
	while (*(str2 + i) != '\0' && offset < n - 1)
	{
		*(str1 + offset) = *(str2 + i);
		i++;
		offset++;
	}
	*(str1 + offset) = '\0';
	return (str1_len + str2_len);
}
