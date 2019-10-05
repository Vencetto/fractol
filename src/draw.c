/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 14:20:09 by vzomber           #+#    #+#             */
/*   Updated: 2019/10/05 14:20:11 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

#define MAX_ITER 80
#define RE_START -2
#define RE_END 1
#define IM_START -1
#define IM_END 1

void	draw_mandelbrot(t_o *o)
{
	int		bpp;
	int		size_line;
	int		endian;
	int aa, bb;
	int a, b;

//	o->img = mlx_new_image(o->mlx, W_WD, W_HT);
//	o->img_data = mlx_get_data_addr(o->img, &bpp, &size_line, &endian);

	for (int x = 0; x < W_HT; x++)
	{
		for (int y = 0; y < W_WD; y++)
		{
			int n = 0, z = 0;

			while (n < 100) {
				aa = a*a - b*b;
				bb = 2 * a * b;

				a = aa;
				b = bb;

				if (ft_abs(a + b) > 16)
					break;

				n++;
			}

			int bright;
			if (n == 100) {
				bright = 255;
			}
			else 
				bright = 0;

			//int tmp = (x * W_HT + y) * 4;
			mlx_pixel_put(o->mlx, o->win, y, x, bright);
//			o->img_data[tmp + 0] = 0;
//			o->img_data[tmp + 1] = 0;
//			o->img_data[tmp + 2] = 0;
//			o->img_data[tmp + 3] = (char)bright;
		}
	}
//		mlx_put_image_to_window(o->mlx, o->win, o->img, 0, 0);
}

void	draw_fractal(t_o *o, char **fractal_name)
{
	if (ft_strcmp(*fractal_name, "julia") == 0 | ft_strcmp(*fractal_name, "Julia") == 0)
		;//draw_julia(o);
	else if (ft_strcmp(*fractal_name, "Mandelbrot") == 0 | ft_strcmp(*fractal_name, "mandelbrot") == 0)
		draw_mandelbrot(o);
}

