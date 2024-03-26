/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jump_bunny.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:18:55 by joana             #+#    #+#             */
/*   Updated: 2024/03/18 14:18:48 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	jump_bunny_right_up(t_vars *vars, t_info *info)
{
	static int	r;

	mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[1]->img, \
	(info->x * 64), (info->y * 64));
	moves_on_screen(info);
	while (r < 4500)
	{
		jump_y_minus_one(info);
		r++;
		if (r == 4500)
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[1]->img, (info->x * 64), (info->y * 64) - 32);
		while (r < 5250 && r >= 4500)
		{
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[6]->img, (info->x * 64), (info->y * 64) - 64);
			r++;
		}
	}
	r = 0;
}

void	jump_bunny_left_up(t_vars *vars, t_info *info)
{
	static int	r;

	mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[1]->img, \
	(info->x * 64), (info->y * 64));
	moves_on_screen(info);
	while (r < 4500)
	{
		jump_y_minus_one(info);
		r++;
		if (r == 4500)
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[1]->img, (info->x * 64), (info->y * 64) - 32);
		while (r < 5250 && r >= 4500)
		{
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[4]->img, (info->x * 64), (info->y * 64) - 64);
			r++;
		}
	}
	r = 0;
}

void	jump_bunny_right_down(t_vars *vars, t_info *info)
{
	static int	r;

	mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[1]->img, \
	(info->x * 64), (info->y * 64));
	moves_on_screen(info);
	while (r < 4500)
	{
		jump_y_plus_one(info);
		r++;
		if (r == 4500)
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[1]->img, (info->x * 64), (info->y * 64) + 32);
		while (r < 5250 && r >= 4500)
		{
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[6]->img, (info->x * 64), (info->y * 64) + 64);
			r++;
		}
	}
	r = 0;
}

void	jump_bunny_left_down(t_vars *vars, t_info *info)
{
	static int	r;

	mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[1]->img, \
	(info->x * 64), (info->y * 64));
	moves_on_screen(info);
	while (r < 4500)
	{
		jump_y_plus_one(info);
		r++;
		if (r == 4500)
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[1]->img, (info->x * 64), (info->y * 64) + 32);
		while (r < 5250 && r >= 4500)
		{
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[4]->img, (info->x * 64), (info->y * 64) + 64);
			r++;
		}
	}
	r = 0;
}

void	jump_bunny_left_left(t_vars *vars, t_info *info)
{
	static int	r;

	mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[1]->img, \
	(info->x * 64), (info->y * 64));
	while (r < 1500)
	{
		mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[4]->img, \
		(info->x * 64), (info->y * 64));
		duck_animation(info);
		flame_animation(info);
		r++;
	}
	mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[1]->img, \
	(info->x * 64), (info->y * 64));
	moves_on_screen(info);
	if (r >= 1500 && r < 4500)
		jump_bunny_left_left2(vars, info, r);
	r = 0;
}
