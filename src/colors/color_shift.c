/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_shift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:43:29 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/26 14:45:22 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fractol.h"

static void	reset(t_color_scheme *cs)
{
	cs->contrast = 100;
	cs->shift = -999;
	cs->palette = -1;
}

int	shift_color(t_color_scheme *cs)
{
	if (cs->palette == 0)
	{
		cs->contrast = 20;
		cs->shift = 45;
	}
	else if (cs->palette == 1)
	{
		cs->contrast = 10;
		cs->shift = 999;
	}
	else if (cs->palette == 2)
	{
		cs->contrast = 100;
		cs->shift = 999;
	}
	else if (cs->palette == 3)
	{
		cs->contrast = -50;
		cs->shift = 999;
	}
	else
		reset(cs);
	cs->palette++;
	return (0);
}
