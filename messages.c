/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:19:28 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/16 10:19:50 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	help_msg()
{
	ft_printf("⊱ ───────────────── {.⋅ Fractol ⋅.} ───────────────── ⊰\n\n");
	ft_printf("Which fractal would you like to see?\n");
	ft_printf("M - Mandelbrot    ");
	ft_printf("J - Julia    ");
	ft_printf("M - Mandelbox\n\n");
	ft_printf("\e[36mUsage example:\t./fractol <type>\n\t\t./fractol M\e[0m\n\n");
	ft_printf("\nFor Julia, you may specify starting values which should be between -2.0 and 2.0.\n");
	ft_printf("\e[36mUsage example:\t");
	ft_printf("./fractol J\n\t\t./fractol J 0.285 0.01\e[0m\n\n");
}