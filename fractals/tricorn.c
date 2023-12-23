/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tricorn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:15:15 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/23 16:15:24 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	tricorn_set(t_fractol *f)
{
	int		n;
	double	zr;
	double	zi;
	double	tmp;

	zr = f->pr;
	zi = f->pi;
	n = 0;
	while (n < MAX_ITERATIONS)
	{
		if ((zr * zr + zi * zi) > 4.0)
			break ;
		tmp = -2 * zr * zi + f->pi;
		zr = zr * zr - zi * zi + f->pr;
		zi = tmp;
		n++;
	}
	return (n);
}
