/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat_animation2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:11:53 by joana             #+#    #+#             */
/*   Updated: 2024/03/06 18:34:56 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	bat_animation_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64));
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[2]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64 - 64));
}

void	bat_animation_up_wings_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64));
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[3]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64 - 32));
}

void	bat_animation_down(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64));
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[2]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64 + 64));
}

void	bat_animation_down_wings_up(t_info *info, int bat_nr)
{
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[1]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64));
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->imgs[3]->img, (info->bat[bat_nr]->x * 64), \
	(info->bat[bat_nr]->y * 64 + 32));
}
