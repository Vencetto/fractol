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
/*
void	draw_mandelbrot(t_o *o)
{
	int		bpp;
	int		size_line;
	int		endian;
	float xscale, yscale, zx, zy, cx, tempx, cy;
	
//	o->img = mlx_new_image(o->mlx, W_WD, W_HT);
//	o->img_data = mlx_get_data_addr(o->img, &bpp, &size_line, &endian);

	xscale = 1; 
	yscale = 1;
	
	for (int x = 0; x < W_HT; x++)
	{
		for (int y = 0; y < W_WD; y++)
		{ 
			// c_real 
			cx = x * xscale + left; 

			// c_imaginary 
			cy = y * yscale + top; 

			// z_real 
			zx = 0; 

			// z_imaginary 
			zy = 0; 
			count = 0; 

			// Calculate whether c(c_real + c_imaginary) belongs 
			// to the Mandelbrot set or not and draw a pixel 
			// at coordinates (x, y) accordingly 
			// If you reach the Maximum number of iterations 
			// and If the distance from the origin is 
			// greater than 2 exit the loop 
			while ((zx * zx + zy * zy < 4) && (count < MAXCOUNT)) 
			{ 
				// Calculate Mandelbrot function 
				// z = z*z + c where z is a complex number 

				// tempx = z_real*_real - z_imaginary*z_imaginary + c_real 
				tempx = zx * zx - zy * zy + cx; 

				// 2*z_real*z_imaginary + c_imaginary 
				zy = 2 * zx * zy + cy; 

				// Updating z_real = tempx 
				zx = tempx; 

				// Increment count 
				count = count + 1; 
			} 

			// To display the created fractal 
			putpixel(x, y, count); 
				
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
*/

void	draw_fractal(t_o *o, char **fractal_name)
{
	if (ft_strcmp(*fractal_name, "julia") == 0 | ft_strcmp(*fractal_name, "Julia") == 0)
		;//draw_julia(o);
	else if (ft_strcmp(*fractal_name, "Mandelbrot") == 0 | ft_strcmp(*fractal_name, "mandelbrot") == 0)
		draw_mandelbrot(o);
}

