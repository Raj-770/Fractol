/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:50:11 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/20 15:49:44 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list args, t_variables *var)
{
	if (c == '%')
		ft_putchar_fd('%', 1, var);
	else if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1, var);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), var);
	else if (c == 'd')
		ft_putnbr(va_arg(args, int), var);
	else if (c == 'i')
		ft_putnbr(va_arg(args, int), var);
	else if (c == 'u')
		ft_putunbr(va_arg(args, unsigned int), var);
	else if (c == 'x')
		ft_puthexa(va_arg(args, unsigned int), 'l', var);
	else if (c == 'X')
		ft_puthexa(va_arg(args, unsigned int), 'u', var);
	else if (c == 'p')
		ft_putptr(va_arg(args, void *), var);
	else
		var->error = -1;
	return (var->error);
}

// Print Character (c == 'c')
int	ft_putchar_fd(char c, int fd, t_variables *var)
{
	int	output;

	output = write(fd, &c, 1);
	if (output < 0)
	{
		var->error = -1;
		return (-1);
	}
	var->cp++;
	return (1);
}
