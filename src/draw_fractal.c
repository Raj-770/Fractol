/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fractal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:42:30 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/26 14:32:39 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	draw_fractal(t_fractol	*f)
{
	mlx_delete_image(f->img.mlx, f->img.img);
	f->img.img = mlx_new_image(f->img.mlx, WIDTH, HEIGHT);
	mlx_image_to_window(f->img.mlx, f->img.img, 0, 0);
	f->x = 0;
	f->y = 0;
	while (f->x < WIDTH)
	{
		f->y = 0;
		while (f->y < HEIGHT)
		{
			f->pr = f->min_r + ((double)f->x * (f->max_r - f->min_r)) / WIDTH;
			f->pi = f->max_i + (double)f->y * (f->min_i - f->max_i) / HEIGHT;
			if (ft_strncmp("M", f->name, 1) == 0)
				f->n = mandelbrot_set(f);
			else if (ft_strncmp("J", f->name, 1) == 0)
				f->n = julia_set(f);
			else if (ft_strncmp("T", f->name, 1) == 0)
				f->n = tricorn_set(f);
			else
				f->error = -1;
			mlx_put_pixel(f->img.img, f->x, f->y, get_psychedelic_color(f));
			f->y++;
		}
		f->x++;
	}
}
