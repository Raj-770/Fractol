/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:51:36 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/16 10:52:01 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "stdio.h"

int32_t	main(int argc, char **argv)
{
	t_fractol	fractol;
	t_img		img;

	img.mlx = mlx_init(WIDTH, HEIGHT, "Fractol", true);
	img.img = mlx_new_image(img.mlx, WIDTH, HEIGHT);
	fractol.img = img;
	init(&fractol);
	parse_args(argc, argv, &fractol);
	if (fractol.error == -1)
		ft_printf("%d", fractol.error);
	// draw_fractal(&fractol);
	//draw_madelbrot_set(&fractol);
	mlx_loop(fractol.img.mlx);
	mlx_terminate(fractol.img.mlx);
	return (EXIT_SUCCESS);
}
