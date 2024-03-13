/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat_vs_bunny.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:27:41 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 12:59:08 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	bumped_into_a_bat(t_info *info)
{
	if (info->vars->map[info->y][info->x + 1] == 'X' || \
	info->vars->map[info->y][info->x + 1] == 'Y')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[51]->img, info->x * 64 + 32, info->y * 64);
	else if (info->vars->map[info->y][info->x - 1] == 'X' || \
	info->vars->map[info->y][info->x - 1] == 'Y')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[53]->img, info->x * 64 - 32, info->y * 64);
}

void	bumped_into_a_bat_again(t_info *info)
{
	if ((info->vars->map[info->y + 1][info->x] == 'X' || \
	info->vars->map[info->y + 1][info->x] == 'Y') && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[47]->img, info->x * 64, info->y * 64 + 32);
	else if ((info->vars->map[info->y + 1][info->x] == 'X' || \
	info->vars->map[info->y + 1][info->x] == 'Y') && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[48]->img, info->x * 64, info->y * 64 + 32);
	else if ((info->vars->map[info->y - 1][info->x] == 'X' || \
	info->vars->map[info->y - 1][info->x] == 'Y') && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[43]->img, info->x * 64, info->y * 64 - 32);
	else if ((info->vars->map[info->y - 1][info->x] == 'X' || \
	info->vars->map[info->y - 1][info->x] == 'Y') && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[44]->img, info->x * 64, info->y * 64 - 32);
}

void	killed_by_a_bat(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, info->bat[bat_nr]->x * 64, \
	info->bat[bat_nr]->y * 64);
	if (info->vars->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x + 1] == 'P' \
	&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[64]->img, info->bat[bat_nr]->x * 64 + 32, \
		info->bat[bat_nr]->y * 64);
	else if (info->vars->map[info->bat[bat_nr]->y] \
	[info->bat[bat_nr]->x + 1] == 'P' && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[66]->img, info->bat[bat_nr]->x * 64 + 32, \
		info->bat[bat_nr]->y * 64);
	else if (info->vars->map[info->bat[bat_nr]->y] \
	[info->bat[bat_nr]->x - 1] == 'P' && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[68]->img, info->bat[bat_nr]->x * 64 - 32, \
		info->bat[bat_nr]->y * 64);
	else if (info->vars->map[info->bat[bat_nr]->y] \
	[info->bat[bat_nr]->x - 1] == 'P' && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[70]->img, info->bat[bat_nr]->x * 64 - 32, \
		info->bat[bat_nr]->y * 64);
}

void	killed_by_a_bat_again(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, info->bat[bat_nr]->x * 64, \
	info->bat[bat_nr]->y * 64);
	if (info->vars->map[info->bat[bat_nr]->y + 1][info->bat[bat_nr]->x] == 'P' \
	&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[61]->img, info->bat[bat_nr]->x * 64, \
		info->bat[bat_nr]->y * 64 + 32);
	else if (info->vars->map[info->bat[bat_nr]->y + 1] \
	[info->bat[bat_nr]->x] == 'P' && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[62]->img, info->bat[bat_nr]->x * 64, \
		info->bat[bat_nr]->y * 64 + 32);
	else if (info->vars->map[info->bat[bat_nr]->y - 1] \
	[info->bat[bat_nr]->x] == 'P' && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[57]->img, info->bat[bat_nr]->x * 64, \
		info->bat[bat_nr]->y * 64 - 32);
	else if (info->vars->map[info->bat[bat_nr]->y -1] \
	[info->bat[bat_nr]->x] == 'P' && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[58]->img, info->bat[bat_nr]->x * 64, \
		info->bat[bat_nr]->y * 64 - 32);
}

void	where_the_fuck_is_the_bunny(t_info *info)
{
	int	p;
	int	x;
	int	y;

	p = 0;
	y = 0;
	while (info->vars->map[y])
	{
		x = 0;
		while (info->vars->map[y][x] && info->vars->map[y][x] != '\n')
		{
			if (info->vars->map[y][x] == 'P')
				p++;
			x++;
		}
		y++;
	}
	if (p == 0)
	{
		print_error_message(10);
		quit(info, EXIT_FAILURE);
	}
}
