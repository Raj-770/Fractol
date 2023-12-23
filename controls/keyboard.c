/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 19:41:10 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/23 19:46:20 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	handel_keyboard(mlx_key_data_t key, void *param)
{
	t_fractol	*fractol;

	fractol = (t_fractol *)param;
	if (key.key == MLX_KEY_ESCAPE)
	{
		mlx_delete_image(fractol->img.mlx, fractol->img.img);
		mlx_close_window(fractol->img.mlx);
		mlx_terminate(fractol->img.mlx);
		exit(EXIT_SUCCESS);
	}
}