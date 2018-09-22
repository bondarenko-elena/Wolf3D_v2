#include "../includes/wolf3d.h"

void	display_text(t_env *env)
{
	mlx_string_put(env->mlx.mlx_init, env->mlx.window, 10, 30, 0xffffff, "Control keys:");
	mlx_string_put(env->mlx.mlx_init, env->mlx.window, 10, 40, 0xffffff, "Move - arrows or AWSD");
	mlx_string_put(env->mlx.mlx_init, env->mlx.window, 10, 50, 0xffffff, "Jump - space");
	mlx_string_put(env->mlx.mlx_init, env->mlx.window, 10, 60, 0xffffff, "Switch music - M");
	mlx_string_put(env->mlx.mlx_init, env->mlx.window, 10, 70, 0xffffff, "Mute - N");
}