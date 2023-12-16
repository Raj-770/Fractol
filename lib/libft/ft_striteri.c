/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:04:37 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/13 12:43:31 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		s_len;
	int		i;

	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		f(i, (s + i));
		i++;
	}
}
