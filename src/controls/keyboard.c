/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 19:41:10 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/26 14:45:52 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fractol.h"

static void	exit_mlx(t_img *img)
{
	mlx_delete_image(img->mlx, img->img);
	mlx_close_window(img->mlx);
	mlx_terminate(img->mlx);
	exit(EXIT_SUCCESS);
}

void	handel_keyboard(mlx_key_data_t key, void *param)
{
	t_fractol	*fractol;

	fractol = (t_fractol *)param;
	if (key.key == MLX_KEY_ESCAPE)
	{
		exit_mlx(&fractol->img);
		return ;
	}
	else if (key.key == MLX_KEY_UP && key.action == MLX_PRESS)
		move(fractol, 0.2, 'U');
	else if (key.key == MLX_KEY_DOWN && key.action == MLX_PRESS)
		move(fractol, 0.2, 'D');
	else if (key.key == MLX_KEY_LEFT && key.action == MLX_PRESS)
		move(fractol, 0.2, 'L');
	else if (key.key == MLX_KEY_RIGHT && key.action == MLX_PRESS)
		move(fractol, 0.2, 'R');
	else if (key.key == MLX_KEY_SPACE && key.action == MLX_PRESS)
		shift_color(&fractol->cs);
	else
		return ;
	draw_fractal(fractol);
}
