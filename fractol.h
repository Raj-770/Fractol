/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:39:43 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/16 11:27:22 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "lib/MLX42/include/MLX42/MLX42.h"
# include "lib/libft/libft.h"
# include "lib/ft_printf/ft_printf.h"
# include <math.h>
# include <stdint.h>
# include <stdio.h>

# ifndef WIDTH
#  define WIDTH 1000
# endif

# ifndef HEIGHT
#  define HEIGHT 1000
# endif

# ifndef MAX_ITERATIONS
#  define MAX_ITERATIONS 100
# endif

typedef struct s_img
{
	mlx_t		*mlx;
	mlx_image_t	*img;
}	t_img;

typedef struct s_fractol
{
	t_img	img;
	char	*name;
	int		x;
	int		y;
	double	j_ci;
	double	j_cr;
	double	m_zi;
	double	m_zr;
	double	max_i;
	double	max_r;
	double	min_r;
	double	min_i;
	double	pi;
	double	pr;
	int		error;
}	t_fractol;

int			get_rgba(int r, int g, int b, int a);
int			mandelbrot_set(t_fractol *f);
void		draw_madelbrot_set(t_fractol *fractol);
int			julia_set(t_fractol *f);
void		draw_julia_set(t_fractol *fractol);
void		init(t_fractol *fractol);
double		ft_atof(char *str);
void		help_msg();
void		parse_args(int argc, char **argv, t_fractol *fractol);


#endif