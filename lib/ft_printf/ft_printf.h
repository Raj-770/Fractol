/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:33:16 by rpambhar          #+#    #+#             */
/*   Updated: 2023/11/24 03:01:57 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_variables
{
	int		cp;
	int		i;
	int		error;
}	t_variables;

int	ft_printf(const char *input, ...);
int	ft_parse(const char *input, va_list args, t_variables *var);
int	ft_format(char c, va_list args, t_variables *var);
int	ft_putchar_fd(char c, int fd, t_variables *var);
int	ft_putstr(char *str, t_variables *var);
int	ft_putnbr(int n, t_variables *var);
int	ft_putunbr(unsigned int n, t_variables *var);
int	ft_puthexa(unsigned long n, char c, t_variables *var);
int	ft_putptr(void *p, t_variables *var);

#endif
