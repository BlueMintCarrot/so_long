/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   picture_cleaner1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:55:21 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 22:28:24 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_pictures1(t_info *info)
{
	if (info->images->bat->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->bunny_left->img);
	if (info->images->bat_wings_up->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->bat_wings_up->img);
	if (info->images->bunny_left->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->bunny_left->img);
	if (info->images->bunny_right->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->bunny_right->img);
	if (info->images->duck_left->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->duck_left->img);
	if (info->images->duck_right->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->duck_right->img);
	if (info->images->flame_center->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->flame_center->img);
	if (info->images->flame_left->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->flame_left->img);
}

void	destroy_pictures2(t_info *info)
{
	if (info->images->flame_right->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->flame_right->img);
	if (info->images->jumping_bunny_left->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->jumping_bunny_left->img);
	if (info->images->jumping_bunny_right->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->jumping_bunny_right->img);
	if (info->images->small_duck->img)
		mlx_destroy_image(info->vars->mlx,
			info->images->small_duck->img);
	if (info->halves->bat_bottom_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bat_bottom_half->img);
	if (info->halves->bat_left_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bat_left_half->img);
	if (info->halves->bat_right_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bat_right_half->img);
	if (info->halves->bat_upper_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bat_upper_half->img);
}

void	destroy_pictures3(t_info *info)
{
	if (info->halves->bat_wings_up_bottom_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bat_wings_up_bottom_half->img);
	if (info->halves->bat_wings_up_left_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bat_wings_up_left_half->img);
	if (info->halves->bat_wings_up_right_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bat_wings_up_right_half->img);
	if (info->halves->bat_wings_up_upper_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bat_wings_up_upper_half->img);
	if (info->halves->bottom_half_duck_facing_left->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bottom_half_duck_facing_left->img);
	if (info->halves->bottom_half_duck_facing_right->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bottom_half_duck_facing_right->img);
	if (info->halves->bunny_left_bottom_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bunny_left_bottom_half->img);
	if (info->halves->bunny_left_left_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bunny_left_bottom_half->img);
}

void	destroy_pictures4(t_info *info)
{
	if (info->halves->bunny_left_right_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bunny_left_right_half->img);
	if (info->halves->bunny_left_upper_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bunny_left_upper_half->img);
	if (info->halves->bunny_right_bottom_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bunny_right_bottom_half->img);
	if (info->halves->bunny_right_left_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bunny_right_left_half->img);
	if (info->halves->bunny_right_right_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bunny_right_right_half->img);
	if (info->halves->bunny_right_upper_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->bunny_right_upper_half->img);
	if (info->halves->center_flame_bottom_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->center_flame_bottom_half->img);
	if (info->halves->center_flame_left_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->center_flame_left_half->img);
}

void	destroy_pictures5(t_info *info)
{
	if (info->halves->center_flame_right_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->center_flame_right_half->img);
	if (info->halves->center_flame_upper_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->center_flame_upper_half->img);
	if (info->halves->duck_face_half_facing_left->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->duck_face_half_facing_left->img);
	if (info->halves->duck_face_half_facing_right->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->duck_face_half_facing_right->img);
	if (info->halves->duck_tail_half_facing_left->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->duck_tail_half_facing_left->img);
	if (info->halves->duck_tail_half_facing_right->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->duck_tail_half_facing_right->img);
	if (info->halves->jumping_bunny_left_bottom_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->jumping_bunny_left_bottom_half->img);
	if (info->halves->jumping_bunny_left_left_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->jumping_bunny_left_left_half->img);
}
