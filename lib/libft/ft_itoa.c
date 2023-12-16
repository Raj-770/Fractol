/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:44:08 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/15 18:13:29 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_len(int n)
{
	int	num_len;
	int	i;

	num_len = 0;
	i = n;
	if (n <= 0)
		num_len++;
	while (i != 0)
	{
		num_len++;
		i = i / 10;
	}
	return (num_len);
}

char	*ft_loader(int n, int num_len, char *num_str)
{
	int	digit;
	int	i;

	i = 0;
	while (n != 0)
	{
		digit = n % 10;
		n = n / 10;
		*(num_str + ((num_len - 1) - i)) = digit + '0';
		i++;
	}
	*(num_str + num_len) = '\0';
	return (num_str);
}

char	*ft_itoa(int n)
{
	char	*num_str;
	int		num_len;

	num_len = ft_num_len(n);
	num_str = (char *)malloc(num_len + 1);
	if (!num_str)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(num_str, "-2147483648\0", 12);
		return (num_str);
	}
	if (n == 0)
	{
		*num_str = '0';
		*(num_str + 1) = '\0';
		return (num_str);
	}
	if (n < 0)
	{
		n = n * -1;
		num_str[0] = '-';
	}
	return (ft_loader(n, num_len, num_str));
}
