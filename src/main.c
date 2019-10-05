/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 14:05:37 by vzomber           #+#    #+#             */
/*   Updated: 2019/10/05 14:05:38 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	algo(t_o *o, char **fractal_name)
{
	o->mlx = mlx_init();
	o->win = mlx_new_window(o->mlx, W_HT, W_WD, "mlx h");
	draw_fractal(o, fractal_name);
//	mlx_string_put(o->mlx, o->win, 420, 100, 0x00ffcb, "PRESS ANY KEY");

	mlx_hook(o->win, 17, 0, &just_exit, (void *)0);
	mlx_hook(o->win, 2, 5, deal_key, o);
	mlx_loop(o->mlx);
}

int		main(int ac, char **av)
{

	t_o o;

	if (ac == 2)
	{
		algo(&o, &av[1]);
	}
	else
		ft_putstr("usage: ./fractol <Julia OR Mandelbrot>\n");
	return (0);
}
