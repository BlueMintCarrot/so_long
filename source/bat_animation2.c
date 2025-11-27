/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat_animation2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:55:07 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 13:40:18 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	bat_animation_up_wings_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->imgs[1]->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64 - 32);
}

void	bat_animation_down_wings_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]-> y * 64);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->imgs[1]->img, info->bat[bat_nr]-> x * 64,
		info->bat[bat_nr]->y * 64 + 32);
}

void	bat_animation_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->imgs[0]->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64 - 64);
}

void	bat_animation_down(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->floor->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->imgs[0]->img, info->bat[bat_nr]->x * 64,
		info->bat[bat_nr]->y * 64 + 64);
}
