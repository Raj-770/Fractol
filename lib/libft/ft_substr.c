/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:30:23 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/17 12:53:48 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_empty(char *substr)
{
	substr = (char *)malloc(1);
	if (substr == NULL)
		return (NULL);
	substr[0] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	string_length;

	string_length = ft_strlen(s);
	if (start + len > string_length)
		len = string_length - start;
	i = 0;
	substr = "";
	if (!s || start >= string_length || len == 0)
	{
		return (ft_empty(NULL));
	}
	if (start >= string_length)
		return (ft_empty(substr));
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		*(substr + i) = *(s + (start + i));
		i++;
	}
	*(substr + i) = '\0';
	return (substr);
}
