/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jump_bunny1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:20 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 16:36:26 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	jump_bunny_right_up(t_info *info)
{
	static int	r;

	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info-> y * 64);
	moves_on_screen(info);
	while (++r < 4501)
	{
		jump_y_minus_one(info);
		if (r == 4500)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->images->floor->img, info->x * 64, info->y * 64);
		while (++r >= 4501 && r < 5251)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[4]->img, info->x * 64, info-> y * 64 - 64);
		r = 0;
	}
}

void	jump_bunny_left_up(t_info *info)
{
	static int	r;

	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	moves_on_screen(info);
	while (++r < 4501)
	{
		jump_y_minus_one(info);
		if (r == 4500)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->images->floor->img, info->x * 64, info->y * 64 - 32);
		while (++r >= 4501 && r < 5251)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[2]->img, info->x * 64, info->y * 64 - 64);
	}
	r = 0;
}

void	jump_bunny_left_left(t_info *info)
{
	static int	r;

	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	while (++r < 1501)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[2]->img, info->x * 64, info->y * 64);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	moves_on_screen(info);
	while (++r < 4501)
	{
		jump_x_minus_one(info);
		if (r == 4500)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[1]->img, info->x * 64, info->y * 64 - 32);
		while (++r >= 4501 && r < 5251)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[4]->img, info->x * 64 - 64, info->y * 64);
	}
	r = 0;
}

void	jump_bunny_right_down(t_info *info)
{
	static int	r;

	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	moves_on_screen(info);
	while (++r < 4501)
	{
		jump_y_plus_one(info);
		if (r == 4500)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->images->floor->img, info->x * 64, info->y * 64 + 32);
		while (++r >= 4501 && r < 5251)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[4]->img, info->x * 64, info->y * 64 + 64);
	}
	r = 0;
}

void	jump_bunny_left_down(t_info *info)
{
	static int	r;

	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	moves_on_screen(info);
	while (++r < 4501)
	{
		jump_y_plus_one(info);
		if (r == 4500)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->images->floor->img, info->x * 64, info->y * 64 + 32);
		while (++r >= 4501 && r < 5251)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[2]->img, info->x * 64, info->y * 64 + 64);
	}
	r = 0;
}
