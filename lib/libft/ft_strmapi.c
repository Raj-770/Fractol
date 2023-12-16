/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:14:43 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/13 11:39:15 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *const s, char (*f)(unsigned int, char))
{
	int		s_len;
	int		i;
	char	*output_str;

	i = 0;
	s_len = ft_strlen(s);
	output_str = (char *)malloc(s_len + 1);
	if (!output_str)
		return (NULL);
	while (i < s_len)
	{
		*(output_str + i) = f(i, s[i]);
		i++;
	}
	*(output_str + i) = '\0';
	return (output_str);
}
