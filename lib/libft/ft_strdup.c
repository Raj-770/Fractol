/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:42:49 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/15 14:41:14 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*dup;

	i = 0;
	len = ft_strlen(str);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	while (str[i] != '\0')
	{
		*(dup + i) = *(str + i);
		i++;
	}
	*(dup + i) = '\0';
	return (dup);
}
