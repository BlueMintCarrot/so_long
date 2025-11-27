/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:30 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 19:41:55 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	load_pictures1(t_info *info)
{
	info->images = malloc(sizeof(t_images));
	if (!info->images)
		return (free_dptr(info), free(info), 0);
	info->images->bat = new_file_img("./textures/Bat_64.xpm", info->vars->mlx,
			info->vars->window);
	info->images->bat_wings_up = new_file_img("./textures/Bat_Wings_Up64.xpm",
			info->vars->mlx, info->vars->window);
	info->images->bunny_left = new_file_img("./textures/Bunny_Left.xpm",
			info->vars->mlx, info->vars->window);
	info->images->bunny_right = new_file_img("./textures/Bunny_Right.xpm",
			info->vars->mlx, info->vars->window);
	info->images->duck_left = new_file_img("./textures/Duck_Left.xpm",
			info->vars->mlx, info->vars->window);
	info->images->duck_right = new_file_img("./textures/Duck_Right.xpm",
			info->vars->mlx, info->vars->window);
	return (1);
}

int	load_pictures2(t_info *info)
{
	info->images->flame_center = new_file_img("./textures/Flame_Center.xpm",
			info->vars->mlx, info->vars->window);
	info->images->flame_left = new_file_img("./textures/Flame_Left.xpm",
			info->vars->mlx, info->vars->window);
	info->images->flame_right = new_file_img("./textures/Flame_Right.xpm",
			info->vars->mlx, info->vars->window);
	info->images->floor = new_file_img("./textures/Floor.xpm",
			info->vars->mlx, info->vars->window);
	info->images->jumping_bunny_left = new_file_img
		("./textures/Jumping_Bunny_Left.xpm", info->vars->mlx,
			info->vars->window);
	info->images->jumping_bunny_right = new_file_img
		("./textures/Jumping_Bunny_Right.xpm", info->vars->mlx,
			info->vars->window);
	info->images->small_duck = new_file_img
		("./textures/Duck_Right32.xpm", info->vars->mlx, info->vars->window);
	info->images->wall = new_file_img
		("./textures/Wall2.xpm", info->vars->mlx, info->vars->window);
	info->halves = malloc(sizeof(t_halves));
	if (!info->halves)
		return (free_dptr(info), free(info), 0);
	info->halves->bat_bottom_half = new_file_img
		("./textures/Bat_Bottom_Half.xpm", info->vars->mlx,
			info->vars->window);
	return (1);
}

void	load_pictures3(t_info *info)
{
	info->halves->bat_left_half = new_file_img
		("./textures/Bat_Left_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bat_right_half = new_file_img
		("./textures/Bat_Right_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bat_upper_half = new_file_img
		("./textures/Bat_Upper_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bat_wings_up_bottom_half = new_file_img
		("./textures/Bat_Wings_Up_Bottom_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bat_wings_up_left_half = new_file_img
		("./textures/Bat_Wings_Up_Left_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bat_wings_up_right_half = new_file_img
		("./textures/Bat_Wings_Up_Right_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bat_wings_up_upper_half = new_file_img
		("./textures/Bat_Wings_Up_Upper_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bottom_half_duck_facing_left = new_file_img
		("./textures/Duck_Left_Bottom_Half_Turning_Left.xpm", info->vars->mlx,
			info->vars->window);
}

void	load_pictures4(t_info *info)
{
	info->halves->bottom_half_duck_facing_right = new_file_img
		("./textures/Duck_Left_Bottom_Half_Turning_Right.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bunny_left_bottom_half = new_file_img
		("./textures/Bunny_Left_Bottom_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bunny_left_left_half = new_file_img
		("./textures/Bunny_Left_Left_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bunny_left_right_half = new_file_img
		("./textures/Bunny_Left_Right_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bunny_left_upper_half = new_file_img
		("./textures/Bunny_Left_Upper_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bunny_right_bottom_half = new_file_img
		("./textures/Bunny_Right_Bottom_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bunny_right_left_half = new_file_img
		("./textures/Bunny_Right_Left_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->bunny_right_right_half = new_file_img
		("./textures/Bunny_Right_Right_Half.xpm", info->vars->mlx,
			info->vars->window);
}

void	load_pictures5(t_info *info)
{
	info->halves->bunny_right_upper_half = new_file_img
		("./textures/Bunny_Right_Upper_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->center_flame_bottom_half = new_file_img
		("./textures/Flame_Center_Bottom_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->center_flame_left_half = new_file_img
		("./textures/Flame_Center_Left_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->center_flame_right_half = new_file_img
		("./textures/Flame_Center_Right_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->center_flame_upper_half = new_file_img
		("./textures/Flame_Center_Upper_Half.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->duck_face_half_facing_left = new_file_img
		("./textures/Duck_Left_Half_Turning_Left.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->duck_face_half_facing_right = new_file_img
		("./textures/Duck_Right_Half_Turning_Right.xpm", info->vars->mlx,
			info->vars->window);
	info->halves->duck_tail_half_facing_left = new_file_img
		("./textures/Duck_Left_Right_Half_Turning_Left.xpm", info->vars->mlx,
			info->vars->window);
}
