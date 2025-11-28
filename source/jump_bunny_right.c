/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jump_bunny_right.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:22 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 22:59:25 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	jump_bunny_right_up(t_info *info)
{
	static int	r;

	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info-> y * 64);
	moves_on_screen(info);
	while (r < 4500)
	{
		jump_y_minus_one(info);
		r++;
		if (r == 4500)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->images->floor->img, info->x * 64, info->y * 64 - 32);
		while (r >= 4500 && r < 5250)
		{
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[4]->img, info->x * 64, info-> y * 64 - 64);
			r++;
		}
	}
	r = 0;
}

void	jump_bunny_right_down(t_info *info)
{
	static int	r;

	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	moves_on_screen(info);
	while (r < 4500)
	{
		jump_y_plus_one(info);
		r++;
		if (r == 4500)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->images->floor->img, info->x * 64, info->y * 64 + 32);
		while (r >= 4500 && r < 5250)
		{
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[4]->img, info->x * 64, info->y * 64 + 64);
			r++;
		}
	}
	r = 0;
}

void	jump_bunny_right_right(t_info *info)
{
	static int	r;

	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	while (r < 750)
	{
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[4]->img, info->x * 64, info->y * 64);
		duck_animation(info);
		flame_animation(info);
		r++;
	}
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->x * 64, info->y * 64);
	moves_on_screen(info);
	if (r >= 750 && r < 4500)
		jump_bunny_right_right2(info, r);
	r = 0;
}

int	jump_bunny_right_right2(t_info *info, int r)
{
	while (r < 4500)
	{
		jump_x_plus_one(info);
		r++;
		if (r == 4500)
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->images->floor->img, (info->x * 64) + 32, (info->y * 64));
		while (r < 5250 && r >= 4500)
		{
			mlx_put_image_to_window(info->vars->mlx, info->vars->window,
				info->imgs[4]->img, (info->x * 64) + 64, (info->y * 64));
			r++;
		}
	}
	return (1);
}
