
#include "fractol.h"

void	algo(t_o *o)
{
	o->mlx = mlx_init();
	o->win = mlx_new_window(o->mlx, W_HT, W_WD, "mlx h");
	mlx_string_put(o->mlx, o->win, 420, 100, 0x00ffcb, "PRESS ENTER");
	mlx_hook(o->win, 2, 5, deal_key, o);
	mlx_loop(o->mlx);
}

int		main(int ac, char **av)
{

	t_o o;

	if (ac == 2)
	{
		algo(&o);
	}
	else
		ft_putstr("usage: ./fractol <name>\n");
	return (0);
}
