
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
}					t_o;

int		deal_key(int key, t_o *o);
int		expose_hook(t_o *o);
int		just_exit(void *param);

#endif
