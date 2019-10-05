/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 14:05:21 by vzomber           #+#    #+#             */
/*   Updated: 2019/10/05 14:05:24 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include "../libft/get_next_line.h"
# include <fcntl.h>
# include <math.h>
# include <stdlib.h>

# define W_WD 1000
# define W_HT 1000

typedef struct		s_o
{
	void			*mlx;
	void			*win;
	void			*img;
	char			*img_data;
}					t_o;

int		deal_key(int key, t_o *o);
int		expose_hook(t_o *o);
int		just_exit(void *param);
void	algo(t_o *o, char **fractal_name);
void	draw_fractal(t_o *o, char **fractal_name);

#endif
