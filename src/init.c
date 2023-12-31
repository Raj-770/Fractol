/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:09:15 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/26 14:45:04 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	set_screen_size(t_fractol *f)
{
	if (ft_strncmp("J", f->name, 1) == 0)
	{
		f->min_r = -2.0;
		f->max_r = 2.0;
		f->min_i = -2.0;
		f->max_i = 2.0;
	}
	else
	{
		f->min_r = -4.0;
		f->max_r = 4.0;
		f->min_i = -4.0;
		f->max_i = f->min_i + (f->max_r - f->min_r) * HEIGHT / WIDTH;
	}
}

static void	init_cs(t_color_scheme *cs)
{
	cs->shift = -999;
	cs->r_set = 0;
	cs->g_set = 0;
	cs->b_set = 0;
	cs->hue = 0;
	cs->saturation = 0;
	cs->brightness = 0;
	cs->contrast = 100;
	cs->c = 0;
	cs->x = 0;
	cs->m = 0;
	cs->r = 0;
	cs->g = 0;
	cs->b = 0;
	cs->palette = 0;
}

void	init(t_fractol *fractol)
{
	fractol->x = 0;
	fractol->y = 0;
	fractol->max_i = 0;
	fractol->max_r = 0;
	fractol->min_i = 0;
	fractol->min_r = 0;
	fractol->pi = 0;
	fractol->pr = 0;
	fractol->m_zi = 0;
	fractol->m_zr = 0;
	fractol->error = 0;
	fractol->n = 0;
	fractol->zoom_factor = 1.48;
	set_screen_size(fractol);
	init_cs(&fractol->cs);
}
