/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:50:07 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/20 15:49:37 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	t_variables	*var;
	va_list		args;
	int			character_printed;

	if (!input)
		return (-1);
	va_start(args, input);
	var = malloc(sizeof(t_variables));
	if (!var)
		return (-1);
	var->cp = 0;
	var->error = 0;
	var->i = 0;
	ft_parse(input, args, var);
	va_end(args);
	character_printed = var->cp;
	if (var->error < 0)
	{
		free(var);
		return (-1);
	}
	free(var);
	return (character_printed);
}
