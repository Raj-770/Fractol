/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:00:05 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/22 14:35:03 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	is_space(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

static int	skip_space(char *str, int *is_negative)
{
	int	i;

	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*is_negative *= -1;
		i++;
	}
	return (i);
}

double	ft_atof(char *str)
{
	int		i;
	int		is_negative;
	double	d;
	double	ret;

	is_negative = 1;
	d = 0.1;
	ret = 0.0;
	i = skip_space(str, &is_negative);
	while (str[i] && ft_isdigit(str[i]) && str[i] != '.')
	{
		ret = (ret * 10.0) + (str[i] - '0');
		i++;
	}
	if (str[i] == '.')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		ret = ret + ((str[i] - '0') * d);
		d = d * 0.1;
		i++;
	}
	if (str[i] && !ft_isdigit(str[i]))
		return (-42);
	return (ret * is_negative);
}
