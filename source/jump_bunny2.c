/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jump_bunny2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:35:32 by joana             #+#    #+#             */
/*   Updated: 2024/03/11 22:15:19 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	jump_bunny_right_right(t_vars *vars, t_info *info)
{
	static int	r;

	mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[1]->img, \
	(info->x * 64), (info->y * 64));
	while (r < 750)
	{
		mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[6]->img, \
		(info->x * 64), (info->y * 64));
		duck_animation(info);
		flame_animation(info);
		r++;
	}
	mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[1]->img, \
	(info->x * 64), (info->y * 64));
	moves_on_screen(info);
	if (r >= 750 && r < 4500)
		jump_bunny_right_right2(vars, info, r);
	r = 0;
}

void	jump_y_minus_one(t_info *info)
{
	if (info->vars->map[info->y - 1][info->x] == 'E')
		leaving_hell(info);
	else if (info->vars->map[info->y - 1][info->x] == 'C')
		fuck_the_duck(info);
	else if (info->vars->map[info->y - 1][info->x] == 'X' || \
	info->vars->map[info->y - 1][info->x] == 'Y')
		bumped_into_a_bat_again(info);
	else
	{
		if (info->bunny_direction == 6)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
			info->vars->imgs[7]->img, (info->x * 64), (info->y * 64) - 32);
		else if (info->bunny_direction == 4)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
			info->vars->imgs[5]->img, (info->x * 64), (info->y * 64) - 32);
		duck_animation(info);
		flame_animation(info);
	}
}

void	jump_y_plus_one(t_info *info)
{
	if (info->vars->map[info->y + 1][info->x] == 'E')
		leaving_hell_yet_another_way(info);
	else if (info->vars->map[info->y + 1][info->x] == 'C')
		fuck_the_duck_once_more(info);
	else if (info->vars->map[info->y + 1][info->x] == 'X' || \
	info->vars->map[info->y + 1][info->x] == 'Y')
		bumped_into_a_bat_again(info);
	else
	{
		if (info->bunny_direction == 6)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
			info->vars->imgs[7]->img, (info->x * 64), (info->y * 64) + 32);
		else if (info->bunny_direction == 4)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
			info->vars->imgs[5]->img, (info->x * 64), (info->y * 64) + 32);
		duck_animation(info);
		flame_animation(info);
	}
}

void	jump_x_minus_one(t_info *info)
{
	if (info->vars->map[info->y][info->x - 1] == 'E')
		leaving_hell_another_way(info);
	else if (info->vars->map[info->y][info->x - 1] == 'C')
		fuck_the_duck_again(info);
	else if (info->vars->map[info->y][info->x - 1] == 'X' || \
	info->vars->map[info->y][info->x - 1] == 'Y')
		bumped_into_a_bat(info);
	else
	{
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[5]->img, (info->x * 64) - 32, (info->y * 64));
		duck_animation(info);
		flame_animation(info);
	}
}

void	jump_x_plus_one(t_info *info)
{
	if (info->vars->map[info->y][info->x + 1] == 'E')
		why_am_i_leaving_hell(info);
	else if (info->vars->map[info->y][info->x + 1] == 'C')
		im_tired_of_fucking_the_duck(info);
	else if (info->vars->map[info->y][info->x + 1] == 'X' || \
	info->vars->map[info->y][info->x + 1] == 'Y')
		bumped_into_a_bat(info);
	else
	{
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[7]->img, (info->x * 64) + 32, (info->y * 64));
		duck_animation(info);
		flame_animation(info);
	}
}
