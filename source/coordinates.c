/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinates.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:48:02 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 21:50:48 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	jump_y_minus_one(t_info *info)
{
	if (info->map[info->y - 1][info->x] == 'E')
		leaving_hell(info);
	else if (info->map[info->y - 1][info->x] == 'C')
		fuck_the_duck(info);
	else if (info->map[info->y - 1][info->x] == 'X'
		|| info->map[info->y - 1][info->x] == 'Y')
		bumped_into_a_bat_again(info);
	else
	{
		if (info->bunny_direction == 6)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[5]->img, info->x * 64, info->y * 64 - 32);
		else if (info->bunny_direction == 4)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[3]->img, info->x * 64, info->y * 64 - 32);
		duck_animation(info);
		flame_animation(info);
	}
}

void	jump_x_minus_one(t_info *info)
{
	if (info->map[info->y][info->x - 1] == 'E')
		leaving_hell_another_way(info);
	else if (info->map[info->y][info->x - 1] == 'C')
		fuck_the_duck_again(info);
	else if (info->map[info->y][info->x - 1] == 'X'
		|| info->map[info->y][info->x - 1] == 'Y')
		bumped_into_a_bat(info);
	else
	{
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[3]->img, info->x * 64 - 32, info->y * 64);
		duck_animation(info);
		flame_animation(info);
	}
}

void	jump_y_plus_one(t_info *info)
{
	if (info->map[info->y + 1][info->x] == 'E')
		leaving_hell_yet_another_way(info);
	else if (info->map[info->y + 1][info->x] == 'C')
		fuck_the_duck_once_more(info);
	else if (info->map[info->y + 1][info->x] == 'X'
		|| info->map[info->y + 1][info->x] == 'Y')
		bumped_into_a_bat_again(info);
	else
	{
		if (info->bunny_direction == 6)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[5]->img, info->x * 64, info->y * 64 + 32);
		else if (info->bunny_direction == 4)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[3]->img, info->x * 64, info->y * 64 + 32);
		duck_animation(info);
		flame_animation(info);
	}
}

void	jump_x_plus_one(t_info *info)
{
	if (info->map[info->y][info->x + 1] == 'E')
		why_am_i_leaving_hell(info);
	else if (info->map[info->y][info->x + 1] == 'C')
		im_tired_of_fucking_the_duck(info);
	else if (info->map[info->y][info->x + 1] == 'X'
		|| info->map[info->y][info->x + 1] == 'Y')
		bumped_into_a_bat(info);
	else
	{
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[5]->img, info->x * 64 + 32, info->y * 64);
		duck_animation(info);
		flame_animation(info);
	}
}
