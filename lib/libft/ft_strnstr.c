/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:13:07 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/16 17:30:05 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	len_little;
	size_t	len_big;
	size_t	i;
	char	*res;

	i = 0;
	len_little = ft_strlen(str2);
	len_big = ft_strlen(str1);
	if (*str2 == '\0')
		return ((char *)str1);
	if (len_big < len_little || n < len_little)
		return (NULL);
	while (*(str1 + i) != '\0' && i < n)
	{
		if (*(str1 + i) == *str2)
		{
			res = ft_substr(str1, i, n - i);
			if (ft_strncmp(str2, res, len_little) == 0)
				return (free(res), ((char *)str1 + i));
			free(res);
		}
		i++;
	}
	return (NULL);
}
