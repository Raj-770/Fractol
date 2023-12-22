/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 08:13:43 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/22 13:19:29 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	zoom(t_fractol *fractol, int x, int y, double zoom_factor)
{
	double	x_math;
	double	y_math;
	double	new_x_range;
	double	new_y_range;

	x_math = fractol->min_r + ((double)x / WIDTH)
		* (fractol->max_r - fractol->min_r);
	y_math = fractol->min_i + (1 - (double)y / HEIGHT)
		* (fractol->max_i - fractol->min_i);
	new_x_range = (fractol->max_r - fractol->min_r) / zoom_factor;
	new_y_range = (fractol->max_i - fractol->min_i) / zoom_factor;
	fractol->min_r = x_math - ((double)x / WIDTH) * new_x_range;
	fractol->max_r = fractol->min_r + new_x_range;
	fractol->min_i = y_math - (1 - (double)y / HEIGHT) * new_y_range;
	fractol->max_i = fractol->min_i + new_y_range;
}
