/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   picture_cleaner2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:55:39 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 15:57:43 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_pictures6(t_info *info)
{
	if (info->halves->jumping_bunny_left_right_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->jumping_bunny_left_right_half->img);
	if (info->halves->jumping_bunny_left_upper_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->jumping_bunny_left_upper_half->img);
	if (info->halves->jumping_bunny_right_bottom_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->jumping_bunny_right_bottom_half->img);
	if (info->halves->jumping_bunny_right_left_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->jumping_bunny_right_left_half->img);
	if (info->halves->jumping_bunny_right_right_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->jumping_bunny_right_right_half->img);
	if (info->halves->jumping_bunny_right_upper_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->jumping_bunny_right_upper_half->img);
	if (info->halves->left_flame_bottom_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->left_flame_bottom_half->img);
	if (info->halves->left_flame_left_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->left_flame_left_half->img);
}

void	destroy_pictures7(t_info *info)
{
	if (info->halves->left_flame_right_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->left_flame_right_half->img);
	if (info->halves->left_flame_upper_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->left_flame_upper_half->img);
	if (info->halves->right_flame_bottom_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->right_flame_bottom_half->img);
	if (info->halves->right_flame_left_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->right_flame_left_half->img);
	if (info->halves->right_flame_right_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->right_flame_right_half->img);
	if (info->halves->right_flame_upper_half->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->right_flame_upper_half->img);
	if (info->halves->upper_half_duck_facing_left->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->upper_half_duck_facing_left->img);
	if (info->halves->upper_half_duck_facing_right->img)
		mlx_destroy_image(info->vars->mlx,
			info->halves->upper_half_duck_facing_right->img);
}

void	free_pictures1(t_info *info)
{
	if (info->images->bat)
		free(info->images->bat);
	if (info->images->bat_wings_up)
		free(info->images->bat_wings_up);
	if (info->images->bunny_left)
		free(info->images->bunny_left);
	if (info->images->bunny_right)
		free(info->images->bunny_right);
	if (info->images->duck_left)
		free(info->images->duck_left);
	if (info->images->duck_right)
		free(info->images->duck_right);
	if (info->images->flame_center)
		free(info->images->flame_center);
	if (info->images->flame_left)
		free(info->images->flame_left);
	if (info->images->flame_right)
		free(info->images->flame_right);
	if (info->images->jumping_bunny_left)
		free(info->images->jumping_bunny_left);
	if (info->images->jumping_bunny_right)
		free(info->images->jumping_bunny_right);
	if (info->images->small_duck)
		free(info->images->small_duck);
}

void	free_pictures2(t_info *info)
{
	if (info->halves->bat_bottom_half)
		free(info->halves->bat_bottom_half);
	if (info->halves->bat_left_half)
		free(info->halves->bat_left_half);
	if (info->halves->bat_right_half)
		free(info->halves->bat_right_half);
	if (info->halves->bat_upper_half)
		free(info->halves->bat_upper_half);
	if (info->halves->bat_wings_up_bottom_half)
		free(info->halves->bat_wings_up_bottom_half);
	if (info->halves->bat_wings_up_left_half)
		free(info->halves->bat_wings_up_left_half);
	if (info->halves->bat_wings_up_right_half)
		free(info->halves->bat_wings_up_right_half);
	if (info->halves->bat_wings_up_upper_half)
		free(info->halves->bat_wings_up_upper_half);
	if (info->halves->bottom_half_duck_facing_left)
		free(info->halves->bottom_half_duck_facing_left);
	if (info->halves->bottom_half_duck_facing_right)
		free(info->halves->bottom_half_duck_facing_right);
	if (info->halves->bunny_left_bottom_half)
		free(info->halves->bunny_left_bottom_half);
	if (info->halves->bunny_left_left_half)
		free(info->halves->bunny_left_left_half);
}

void	free_pictures3(t_info *info)
{
	if (info->halves->bunny_left_right_half)
		free(info->halves->bunny_left_right_half);
	if (info->halves->bunny_left_upper_half)
		free(info->halves->bunny_left_upper_half);
	if (info->halves->bunny_right_bottom_half)
		free(info->halves->bunny_right_bottom_half);
	if (info->halves->bunny_right_left_half)
		free(info->halves->bunny_right_left_half);
	if (info->halves->bunny_right_right_half)
		free(info->halves->bunny_right_right_half);
	if (info->halves->bunny_right_upper_half)
		free(info->halves->bunny_right_upper_half);
	if (info->halves->center_flame_bottom_half)
		free(info->halves->center_flame_bottom_half);
	if (info->halves->center_flame_left_half)
		free(info->halves->center_flame_left_half);
	if (info->halves->center_flame_right_half)
		free(info->halves->center_flame_right_half);
	if (info->halves->center_flame_upper_half)
		free(info->halves->center_flame_upper_half);
	if (info->halves->duck_face_half_facing_left)
		free(info->halves->duck_face_half_facing_left);
	if (info->halves->duck_face_half_facing_right)
		free(info->halves->duck_face_half_facing_right);
}
