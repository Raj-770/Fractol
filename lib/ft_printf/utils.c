/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:50:59 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/20 15:48:35 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Print String (c == 's')
int	ft_putstr(char *str, t_variables *var)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", var);
		return (-1);
	}
	while (str[i])
	{
		if (ft_putchar_fd(str[i], 1, var) == -1)
			return (-1);
		i++;
	}
	return (0);
}

// Print Integer (c == 'd')
int	ft_putnbr(int n, t_variables *var)
{
	if (n == -2147483648)
	{
		if (ft_putstr("-2147483648", var) == -1)
			return (-1);
		return (0);
	}
	if (n < 0)
	{
		if (ft_putchar_fd('-', 1, var) == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		if (ft_putnbr(n / 10, var) == -1)
			return (-1);
		if (ft_putchar_fd(((n % 10) + '0'), 1, var) == -1)
			return (-1);
	}
	else
		if (ft_putchar_fd((n + '0'), 1, var) == -1)
			return (-1);
	return (0);
}

// Print Unsigned Integer (c == 'u')
int	ft_putunbr(unsigned int n, t_variables *var)
{
	if (n >= 10)
	{
		if (ft_putunbr(n / 10, var) == -1)
			return (-1);
		if (ft_putchar_fd(((n % 10) + '0'), 1, var) == -1)
			return (-1);
	}
	else
		if (ft_putchar_fd((n + '0'), 1, var) == -1)
			return (-1);
	return (0);
}

// Print Hexadecimal Lowecase (c == 'x')
int	ft_puthexa(unsigned long n, char c, t_variables *var)
{
	char	*base;

	if (c == 'u')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n > 15)
	{
		if (ft_puthexa(n / 16, c, var) == -1)
			return (-1);
	}
	if (ft_putchar_fd(base[n % 16], 1, var) == -1)
		return (-1);
	return (0);
}

// Print Pointer (c == 'p')
int	ft_putptr(void *p, t_variables *var)
{
	if (ft_putstr("0x", var) == -1)
		return (-1);
	if (ft_puthexa((unsigned long)p, 'l', var) == -1)
		return (-1);
	return (0);
}
