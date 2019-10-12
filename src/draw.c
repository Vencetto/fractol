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

void	draw_net(t_o *o)
{
	for (int x = 0; x < W_HT; x++){
		for (int y = 0; y < W_WD; y++){
			if (y % 100 == 0 && x % 100 == 0)
				mlx_pixel_put(o->mlx, o->win, x, y, 0x00ff00);
		}
	}
}

void	draw_mandelbrot(t_o *o)
{
	float tempx;
//	double r;
//	double i;
	for (int x = 0; x < W_HT; x++)
	{
		for (int y = 0; y < W_HT; y++)
		{
			double r = -1 + 1 * ((double)x / W_HT);
			double i = -1 + 1 * ((double)y / W_WD);

			int count = 0, color = 0;
			double cx = r, cy = i;
			double zx = 0, zy = 0;
			double zx_tmp = 0, zy_tmp = 0;
			while (count < MAX_ITER && (zx * zx + zy * zy < 4))
			{
				zx_tmp = zx * zx - (zy * zy);
				zy_tmp = zx * zy + zx * zy;
				zx = zx_tmp + cx;
				zy = zy_tmp + cy;
				count++;
			}
			if (zx * zx + zy * zy < 4)
				color = 0xff1212;
			// else
				// color = 0x1212ff;
			mlx_pixel_put(o->mlx, o->win, x, y, color);
 }
}
}
/*
void	draw_mandelbrot(t_o *o)
{
double MinRe = -2.0;
double MaxRe = 1.0;
double MinIm = -1.2;
double MaxIm = MinIm+(MaxRe-MinRe)*W_HT/W_WD;
double Re_factor = (MaxRe-MinRe)/(W_WD-1);
double Im_factor = (MaxIm-MinIm)/(W_HT-1);
unsigned MaxIterations = 30;

for(unsigned y=0; y<W_HT; ++y)
{
	double c_im = MaxIm - y*Im_factor;
	for(unsigned x=0; x<W_WD; ++x)
	{
		double c_re = MinRe + x*Re_factor;

		double Z_re = c_re, Z_im = c_im;
		int isInside = 1;
		for(unsigned n=0; n<MaxIterations; ++n)
		{
			double Z_re2 = Z_re*Z_re, Z_im2 = Z_im*Z_im;
			if(Z_re2 + Z_im2 > 4)
			{
				isInside = 0;
				break;
			}
			Z_im = 2*Z_re*Z_im + c_im;
			Z_re = Z_re2 - Z_im2 + c_re;
		}
		if(isInside == 1)
		{
			mlx_pixel_put(o->mlx, o->win, x, y, 0xff1212);
		}
	}
}
}*/

void	draw_fractal(t_o *o, char **fractal_name)
{
	if (ft_strcmp(*fractal_name, "julia") == 0 | ft_strcmp(*fractal_name, "y") == 0 | ft_strcmp(*fractal_name, "Julia") == 0)
		;//draw_julia(o);
	else if (ft_strcmp(*fractal_name, "Mandelbrot") == 0 | ft_strcmp(*fractal_name, "m") == 0 |ft_strcmp(*fractal_name, "mandelbrot") == 0)
	{
		draw_mandelbrot(o);
		// draw_net(o);
	}
}

