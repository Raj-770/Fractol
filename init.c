/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:09:15 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/22 11:22:13 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	set_screen_size(t_fractol *f)
{
	if (ft_strncmp("M", f->name, 1) == 0)
	{
		f->min_r = -4.0;
		f->max_r = 4.0;
		f->min_i = -4.0;
		f->max_i = 4.0;
	}
	else if (ft_strncmp("J", f->name, 1) == 0)
	{
		f->min_r = -2.0;
		f->max_r = 2.0;
		f->min_i = -2.0;
		f->max_i = 2.0;
	}
}

void	init(t_fractol *fractol)
{
	fractol->x = 0;
	fractol->y = 0;
	fractol->j_ci = -0.090000;
	fractol->j_cr = -0.766667;
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
	set_screen_size(fractol);
}
