/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:41:42 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/15 21:04:44 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	mandelbrot_set(t_fractol *f)
{
	int		n;
	double	temp;

	n = 0;
	f->m_zi = 0;
	f->m_zr = 0;
	while (n < MAX_ITERATIONS)
	{
		if ((f->m_zr * f->m_zr + f->m_zi * f->m_zi) > 4.0)
			break ;
		temp = 2 * f->m_zr * f->m_zi + f->pi;
		f->m_zr = f->m_zr * f->m_zr - f->m_zi * f->m_zi + f->pr;
		f->m_zi = temp;
		n++;
	}
	return (n);
}

void	draw_madelbrot_set(t_fractol *f)
{
	int	n;

	f->min_r = -4.0;
	f->max_r = 4.0;
	f->min_i = -4.0;
	f->max_i = 4.0;
	f->x = 0;
	mlx_image_to_window(f->img.mlx, f->img.img, 0, 0);
	while (f->x < WIDTH)
	{
		f->y = 0;
		while (f->y < HEIGHT)
		{
			f->pr = f->min_r + (double)f->x * (f->max_r - f->min_r) / WIDTH;
			f->pi = f->max_i + (double)f->y * (f->min_i - f->max_i) / HEIGHT;
			n = mandelbrot_set(f);
			mlx_put_pixel(f->img.img, f->x, f->y, get_rgba(255, 255, 255, n));
			f->y++;
		}
		f->x++;
	}
}
