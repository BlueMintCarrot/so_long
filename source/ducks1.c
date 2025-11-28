/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ducks1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:50:59 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 21:46:16 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fuck_the_duck(t_info *info)
{
	if (info->map[info->y - 1][info->x] == 'C' && info->duck_direction == 4
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[14]->img, info->x * 64, info->y * 64 - 32);
	else if (info->map[info->y - 1][info->x] == 'C' && info->duck_direction == 4
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[12]->img, info->x * 64, info->y * 64 - 32);
	else if (info->map[info->y - 1][info->x] == 'C' && info->duck_direction == 6
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[13]->img, info->x * 64, info-> y * 64 - 32);
	else if (info->map[info->y - 1][info->x == 'C' && info->duck_direction == 6
		&& info->bunny_direction == 6])
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[11]->img, info->x * 64, info->y * 64 - 32);
	flame_animation(info);
	bat_animation(info);
}

void	fuck_the_duck_again(t_info *info)
{
	if (info->map[info->y][info->x - 1] == 'C' && info->duck_direction == 4
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[20]->img, info->x * 64 - 32, info->y * 64);
	else if (info->map[info->y][info->x - 1] == 'C' && info->duck_direction == 6
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[21]->img, info->x * 64 - 32, info->y * 64);
	flame_animation(info);
	bat_animation(info);
}

void	fuck_the_duck_once_more(t_info *info)
{
	if (info->map[info->y + 1][info->x] == 'C' && info->duck_direction == 4
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[18]->img, info->x * 64, info->y * 64 + 32);
	else if (info->map[info->y + 1][info->x] == 'C' && info->duck_direction == 4
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[16]->img, info->x * 64, info->y * 64 + 32);
	else if (info->map[info->y + 1][info->x] == 'C' && info->duck_direction == 6
		&& info->bunny_direction == 4)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[17]->img, info->x * 64, info->y * 64 + 32);
	else if (info->map[info->y + 1][info->x] == 'C'
		&& info->duck_direction == 6 && info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[15]->img, info->x * 64, info->y * 64 + 32);
	flame_animation(info);
	bat_animation(info);
}

void	im_tired_of_fucking_the_duck(t_info *info)
{
	if (info->map[info->y][info->x + 1] == 'C' && info->duck_direction == 4
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[22]->img, info->x * 64 + 32, info->y * 64);
	else if (info->map[info->y][info->x + 1] == 'C' && info->duck_direction == 6
		&& info->bunny_direction == 6)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[19]->img, info->x * 64 + 32, info->y * 64);
	flame_animation(info);
	bat_animation(info);
}

void	ducks_captured(t_info *info)
{
	static int	c;
	static int	w;

	if (c == 0 && w == 0)
	{
		c = 1;
		w = 128;
	}
	if (c == 1)
	{
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[69]->img, w, 0);
		c = 2;
	}
	else if (c == 2)
	{
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[70]->img, w, 0);
		w += 64;
		c = 1;
	}
}
