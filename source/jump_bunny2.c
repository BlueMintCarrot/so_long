/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jump_bunny2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:22 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 15:49:59 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	jump_bunny_right_right(t_info *info)
{
	static int	r;

	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	while (r < 750)
	{
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[4]->img, info->x * 64, info->y * 64);
		r++;
	}
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	moves_on_screen(info);
	while (++r < 4501)
	{
		jump_x_plus_one(info);
		if (r == 4500)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[1]->img, info->x * 64 + 32, info->y * 64);
		while (++r >= 4501 && r < 5251)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[6]->img, info->x * 64 + 64, info->y * 64);
	}
	r = 0;
}

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
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[5]->img, info->x * 64 - 32, info->y * 64);
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
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[5]->img, info->x * 64 + 32, info->y * 64);
}
