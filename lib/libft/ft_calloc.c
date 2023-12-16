/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:58:01 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/12 10:26:59 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// allocates dynamic memory using malloc and initialize the memory to zero.

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*memory_ptr;
	size_t	i;

	i = 0;
	memory_ptr = (void *)malloc(nitems * size);
	if (memory_ptr == NULL)
		return (0);
	while (i < (nitems * size))
	{
		*((unsigned char *)memory_ptr + i) = '\0';
		i++;
	}
	return (memory_ptr);
}
