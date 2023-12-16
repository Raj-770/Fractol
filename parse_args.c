/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:47:33 by rpambhar          #+#    #+#             */
/*   Updated: 2023/12/16 11:37:32 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	set_fractal(t_fractol *f, int ac, char **av);
static void	set_julia_constants(t_fractol *f, int ac, char **av);

void	parse_args(int argc, char **argv, t_fractol *fractol)
{
	if (argc < 2)
		fractol->error = -1;
	else
	{
		set_fractal(fractol, argc, argv);
	}

}

static void	set_fractal(t_fractol *f, int ac, char **av)
{
	if (ft_strncmp("M", av[1], 1) == 0)
		f->name = "M";
	else if (ft_strncmp("J", av[1], 1) == 0)
	{
		f->name = "J";
		if (ac > 2)
			set_julia_constants(f, ac, av);
	}
}

static void	set_julia_constants(t_fractol *f, int ac, char **av)
{
	if (ac < 5 && ac !=3)
	{
		f->j_ci = ft_atof(av[2]);
		if (f->j_ci == -42 || f->j_ci > 2.0 || f->j_ci < -2.0)
			f->error = -1;
		f->j_cr = ft_atof(av[3]);
		if (f->j_cr == -42 || f->j_ci > 2.0 || f->j_ci < -2.0)
			f->error = -1;
	}
	else
		f->error = -1;
}
