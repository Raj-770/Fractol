/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:39:43 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/22 14:38:13 by rpambhar         ###   ########.fr       */
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

# define EVENT_CLOSE_BTN 17
# define KEY_ESC 65307
# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100
# define KEY_UP 65362
# define KEY_DOWN 65364
# define KEY_LEFT 65361
# define KEY_RIGHT 65363
# define KEY_PLUS 61
# define KEY_MINUS 45
# define KEY_SPACE 32
# define KEY_ONE 49
# define KEY_TWO 50
# define KEY_THREE 51
# define KEY_FOUR 52
# define KEY_FIVE 53
# define MOUSE_WHEEL_UP 4
# define MOUSE_WHEEL_DOWN 5
# define MOUSE_WHEEL_BTN 3
# define MOUSE_BTN 1
# define MOUSE_BTN_2 3
# define KEY_K 107

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
	int		n;
}	t_fractol;

int			get_rgba(int r, int g, int b, int a);
int			mandelbrot_set(t_fractol *f);
void		draw_fractal(t_fractol	*f);
int			julia_set(t_fractol *f);
void		init(t_fractol *fractol);
double		ft_atof(char *str);
void		help_msg(void);
void		parse_args(int argc, char **argv, t_fractol *fractol);
void		handle_mouse(double xdelta, double ydelta, void *param);
void		zoom(t_fractol *fractol, int x, int y, double zoom_factor);
void		set_screen_size(t_fractol *f);

#endif