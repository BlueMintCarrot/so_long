/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hell.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:17 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 22:34:27 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	leaving_hell(t_info *info)
{
	if (info->map[info->y - 1][info->x] == 'E' && info->exit_direction == 4
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[24], info->x * 64, info->y * 64 - 32);
	else if (info->map[info->y - 1][info->x] == 'E'
		&& info->exit_direction == 4 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[23]->img, info->x * 64, info->y * 64 - 32);
	else if (info->map[info->y - 1][info->x] == 'E'
		&& info->exit_direction == 5 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[30]->img, info->x * 64, info-> y * 64 - 32);
	else if (info->map[info->y - 1][info->x] == 'E'
		&& info->exit_direction == 5 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[29]->img, info->x * 64, info->y * 64 - 32);
	else if (info->map[info->y - 1][info->x] == 'E'
		&& info->exit_direction == 6 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[36]->img, info->x * 64, info->y * 64 - 32);
	else if (info->map[info->y - 1][info->x] == 'E'
		&& info->exit_direction == 6 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[35]->img, info->x * 64, info->y * 64 - 32);
	bat_animation(info);
}

void	leaving_hell_another_way(t_info *info)
{
	if (info->map[info->y][info->x - 1] == 'E' && info->exit_direction == 4
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[28]->img, info->x * 64 - 32, info->y * 64);
	else if (info->map[info->y][info->x - 1] == 'E'
		&& info->exit_direction == 5 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[34]->img, info->x * 64 - 32, info->y * 64);
	else if (info->map[info->y][info->x - 1] == 'E'
		&& info->exit_direction == 6 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[40]->img, info->x * 64 - 32, info->y * 64);
	bat_animation(info);
}

void	leaving_hell_yet_another_way(t_info *info)
{
	if (info->map[info->y + 1][info->x] == 'E' && info->exit_direction == 4
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[26]->img, info->x * 64, info->y * 64 + 32);
	else if (info->map[info->y + 1][info->x] == 'E'
		&& info->exit_direction == 4 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[25]->img, info->x * 64, info->y * 64 + 32);
	else if (info->map[info->y + 1][info->x] == 'E'
		&& info->exit_direction == 5 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[32]->img, info->x * 64, info->y * 64 + 32);
	else if (info->map[info->y + 1][info->x] == 'E'
		&& info->exit_direction == 5 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[31]->img, info->x * 64, info->y * 64 + 32);
	else if (info->map[info->y + 1][info->x] == 'E'
		&& info->exit_direction == 6 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[38]->img, info->x * 64, info->y * 64 + 32);
	else if (info->map[info->y + 1][info->x] == 'E'
		&& info->exit_direction == 6 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[37]->img, info->x * 64, info->y * 64 + 32);
	bat_animation(info);
}

void	why_am_i_leaving_hell(t_info *info)
{
	if (info->map[info->y][info->x + 1] == 'E' && info->exit_direction == 4
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[27]->img, info->x * 64 + 32, info->y * 64);
	else if (info->map[info->y][info->x + 1] == 'E'
		&& info->exit_direction == 5 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[33]->img, info->x * 64 + 32, info->y * 64);
	else if (info->map[info->y][info->x + 1] == 'E'
		&& info->exit_direction == 6 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[39]->img, info->x * 64 + 32, info->y * 64);
	bat_animation(info);
}
