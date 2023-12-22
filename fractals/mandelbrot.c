/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:41:42 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/16 13:57:24 by rpambhar         ###   ########.fr       */
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
