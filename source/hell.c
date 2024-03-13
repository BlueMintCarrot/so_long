/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hell.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:35:25 by joana             #+#    #+#             */
/*   Updated: 2024/03/06 18:57:36 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	leaving_hell(t_info *info)
{
	if (info->vars->map[info->y - 1][info->x] == 'E' && \
	info->exit_direction == 4 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[26]->img, info->x * 64, info->y * 64 - 32);
	else if (info->vars->map[info->y - 1][info->x] == 'E' && \
	info->exit_direction == 4 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[25]->img, info->x * 64, info->y * 64 - 32);
	else if (info->vars->map[info->y - 1][info->x] == 'E' && \
	info->exit_direction == 5 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[32]->img, info->x * 64, info->y * 64 - 32);
	else if (info->vars->map[info->y - 1][info->x] == 'E' && \
	info->exit_direction == 5 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[31]->img, info->x * 64, info->y * 64 - 32);
	else if (info->vars->map[info->y - 1][info->x] == 'E' && \
	info->exit_direction == 6 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[38]->img, info->x * 64, info->y * 64 - 32);
	else if (info->vars->map[info->y - 1][info->x] == 'E' && \
	info->exit_direction == 6 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[37]->img, info->x * 64, info->y * 64 - 32);
	bat_animation(info);
}

void	leaving_hell_another_way(t_info *info)
{
	if (info->vars->map[info->y][info->x - 1] == 'E' && \
	info->exit_direction == 4 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[30]->img, info->x * 64 - 32, info->y * 64);
	else if (info->vars->map[info->y][info->x - 1] == 'E' && \
	info->exit_direction == 5 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[36]->img, info->x * 64 - 32, info->y * 64);
	else if (info->vars->map[info->y][info->x - 1] == 'E' && \
	info->exit_direction == 6 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[42]->img, info->x * 64 - 32, info->y * 64);
	bat_animation(info);
}

void	leaving_hell_yet_another_way(t_info *info)
{
	if (info->vars->map[info->y + 1][info->x] == 'E' && \
	info->exit_direction == 4 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[28]->img, info->x * 64, info->y * 64 + 32);
	else if (info->vars->map[info->y + 1][info->x] == 'E' && \
	info->exit_direction == 4 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[27]->img, info->x * 64, info->y * 64 + 32);
	else if (info->vars->map[info->y + 1][info->x] == 'E' && \
	info->exit_direction == 5 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[34]->img, info->x * 64, info->y * 64 + 32);
	else if (info->vars->map[info->y + 1][info->x] == 'E' && \
	info->exit_direction == 5 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[33]->img, info->x * 64, info->y * 64 + 32);
	else if (info->vars->map[info->y + 1][info->x] == 'E' && \
	info->exit_direction == 6 && info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[40]->img, info->x * 64, info->y * 64 + 32);
	else if (info->vars->map[info->y + 1][info->x] == 'E' && \
	info->exit_direction == 6 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[39]->img, info->x * 64, info->y * 64 + 32);
	bat_animation(info);
}

void	why_am_i_leaving_hell(t_info *info)
{
	if (info->vars->map[info->y][info->x + 1] == 'E' && \
	info->exit_direction == 4 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[29]->img, info->x * 64 + 32, info->y * 64);
	else if (info->vars->map[info->y][info->x + 1] == 'E' && \
	info->exit_direction == 5 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[35]->img, info->x * 64 + 32, info->y * 64);
	else if (info->vars->map[info->y][info->x + 1] == 'E' && \
	info->exit_direction == 6 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[41]->img, info->x * 64 + 32, info->y * 64);
	bat_animation(info);
}
