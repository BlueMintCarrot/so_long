/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat_animation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:50:40 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 13:34:52 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	bat_animation_right_wings_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->imgs[1]->img, info->bat[bat_nr]->x * 64 + 32,
		info->bat[bat_nr]->y * 64);
}

void	bat_animation_left_wings_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->imgs[1]->img, info->bat[bat_nr]->x * 64 - 32,
		info->bat[bat_nr]->y * 64);
}

void	bat_animation_right(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->imgs[0]->img, info->bat[bat_nr]->x * 64 + 64,
		info->bat[bat_nr]->y * 64);
}

void	bat_animation_left(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->imgs[0]->img, info->bat[bat_nr]->x * 64 - 64,
		info->bat[bat_nr]->y * 64);
}
