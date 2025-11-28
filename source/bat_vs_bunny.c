/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat_vs_bunny.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:50:50 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 21:45:38 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	where_the_fuck_is_the_bunny(t_info *info)
{
	int	p;
	int	x;
	int	y;

	p = 0;
	y = -1;
	while (info->map[++y])
	{
		x = -1;
		while (info->map[y][++x] && info->map[y][x] != '\n')
			if (info->map[y][x] == 'P')
				p++;
	}
	if (p == 0)
	{
		print_error_message(10);
		quit(info, EXIT_FAILURE);
	}
}

void	killed_by_a_bat(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]-> y * 64);
	if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x + 1] == 'P'
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[62]->img, info->bat[bat_nr]->x * 64 + 32,
			info->bat[bat_nr]->y * 64);
	else if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x + 1] == 'P'
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[64]->img, info->bat[bat_nr]->x * 64 + 32,
			info->bat[bat_nr]->y * 64);
	else if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x - 1] == 'P'
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[66]->img, info->bat[bat_nr]->x * 64 - 32,
			info->bat[bat_nr]->y * 64);
	else if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x - 1] == 'P'
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[68]->img, info->bat[bat_nr]->x * 64 - 32,
			info->bat[bat_nr]->y * 64);
}

void	killed_by_a_bat_again(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]-> y * 64);
	if (info->map[info->bat[bat_nr]->y + 1][info->bat[bat_nr]->x] == 'P'
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[59]->img, info->bat[bat_nr]->x * 64,
			info->bat[bat_nr]->y * 64 + 32);
	else if (info->map[info->bat[bat_nr]-> y + 1][info->bat[bat_nr]->x] == 'P'
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[60]->img, info->bat[bat_nr]->x * 64,
			info->bat[bat_nr]->y * 64 + 32);
	else if (info->map[info->bat[bat_nr]-> y - 1][info->bat[bat_nr]->x] == 'P'
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[55]->img, info->bat[bat_nr]-> x * 64,
			info->bat[bat_nr]->y * 64 - 32);
	else if (info->map[info->bat[bat_nr]->y - 1][info->bat[bat_nr]->x] == 'P'
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[56]->img, info->bat[bat_nr]->x * 64,
			info->bat[bat_nr]->y * 64 - 32);
}

void	bumped_into_a_bat(t_info *info)
{
	if (info->map[info->y][info->x + 1] == 'X'
		|| info->map[info->y][info->x + 1] == 'Y')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[49]->img, info->x * 64 + 32, info->y * 64);
	else if (info->map[info->y][info->x - 1] == 'X'
		|| info->map[info->y][info->x - 1] == 'Y')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[51]->img, info->x * 64 - 32, info->y * 64);
}

void	bumped_into_a_bat_again(t_info *info)
{
	if ((info->map[info->y + 1][info->x] == 'X'
		|| info->map[info->y + 1][info->x] == 'Y')
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[45]->img, info->x * 64, info->y * 64 + 32);
	else if ((info->map[info-> y + 1][info->x] == 'X'
		|| info->map[info->y + 1][info->x] == 'Y')
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[46]->img, info->x * 64, info->y * 64 + 32);
	else if ((info->map[info->y - 1][info->x] == 'X'
		|| info->map[info->y - 1][info->x] == 'Y')
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[41]->img, info->x * 64, info->y * 64 - 32);
	else if ((info->map[info->y - 1][info->x] == 'X'
		|| info->map[info->y - 1][info->x] == 'Y')
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[42]->img, info->x * 64, info->y * 64 - 32);
}
