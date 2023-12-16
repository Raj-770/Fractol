/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:14:17 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/19 12:03:08 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str) + 1;
	while (i < len)
	{
		if ((unsigned char)*(str + i) == (char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	return (0);
}
