/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat_animation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:11:31 by joana             #+#    #+#             */
/*   Updated: 2024/03/06 18:32:47 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	bat_animation_right(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64));
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[2]->img, (info->bat[bat_nr]->x * 64 + 64), \
	(info->bat[bat_nr]->y * 64));
}

void	bat_animation_right_wings_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64));
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[3]->img, (info->bat[bat_nr]->x * 64 + 32), \
	(info->bat[bat_nr]->y * 64));
}

void	bat_animation_left(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64));
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[2]->img, (info->bat[bat_nr]->x * 64 - 64), \
	(info->bat[bat_nr]->y * 64));
}

void	bat_animation_left_wings_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64));
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[3]->img, (info->bat[bat_nr]->x * 64 - 32), \
	(info->bat[bat_nr]->y * 64));
}
