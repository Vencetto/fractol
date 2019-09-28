
#include "fractol.h"

int		just_exit(void *param)
{
	(void)param;
	exit(0);
	return (0);
}

int		expose_hook(t_o *o)
{
	mlx_string_put(o->mlx, o->win, 40, 40, 0x00ffcb, "KEYS:");
/*	mlx_string_put(o->mlx, o->win, 40, 80, 0x9000ff, "MOVE: ARROWS");
	mlx_string_put(o->mlx, o->win, 40, 100, 0x9000ff, "ZOOM = + -");
	mlx_string_put(o->mlx, o->win, 40, 120, 0x9000ff, "ROTATE = A W S D Q E");
	mlx_string_put(o->mlx, o->win, 40, 140, 0x9000ff, "COLOR_MAP = 1 2 3");
	mlx_string_put(o->mlx, o->win, 50, 160, 0x1220ff, "(only for 42-map)");
	mlx_string_put(o->mlx, o->win, 40, 180, 0x9000ff, "COLOR_42 = 4 5 6");
	mlx_string_put(o->mlx, o->win, 50, 200, 0x1220ff, "(only for 42-map)");
	mlx_string_put(o->mlx, o->win, 40, 220, 0x9000ff, "COLOR = ENTER");
	mlx_string_put(o->mlx, o->win, 40, 240, 0x9000ff, "MAKE DISCO = SPACE");
*/	mlx_string_put(o->mlx, o->win, 40, 260, 0x9000ff, "EXIT = ESC");
	return (0);
}

int		deal_key(int key, t_o *o)
{
	mlx_clear_window(o->mlx, o->win);
	if (key == 53)
		just_exit((void *)0);
//	if (key == 123)
//		move_x(map, -1);
	expose_hook(o);
	return (0);
}
