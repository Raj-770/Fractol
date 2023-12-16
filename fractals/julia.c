/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:57:34 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/15 21:03:00 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	julia_set(t_fractol *f)
{
	int		n;
	double	temp;

	n = 0;
	while (n < MAX_ITERATIONS)
	{
		if ((f->pi * f->pi + f->pr * f->pr) > 4.0)
			break ;
		temp = 2 * f->pr * f->pi + f->j_ci;
		f->pr = f->pr * f->pr - f->pi * f->pi + f->j_cr;
		f->pi = temp;
		n++;
	}
	return (n);
}

void	draw_julia_set(t_fractol *f)
{
	int	n;

	f->min_r = -2.0;
	f->max_r = 2.0;
	f->min_i = -2.0;
	f->max_i = 2.0;
	f->x = 0;
	mlx_image_to_window(f->img.mlx, f->img.img, 0, 0);
	while (f->x < WIDTH)
	{
		f->y = 0;
		while (f->y < HEIGHT)
		{
			f->pr = f->min_r + (double)f->x * (f->max_r - f->min_r) / WIDTH;
			f->pi = f->max_i + (double)f->y * (f->min_i - f->max_i) / HEIGHT;
			n = julia_set(f);
			mlx_put_pixel(f->img.img, f->x, f->y, get_rgba(255, 255, 255, n));
			f->y++;
		}
		f->x++;
	}
}
