/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:32 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 23:00:00 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_pictures6(t_info *info)
{
	info->halves->duck_tail_half_facing_right = new_file_img
		("./textures/Duck_Left_Right_Half_Turning_Right.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->jumping_bunny_left_bottom_half = new_file_img
		("./textures/Jumping_Bunny_Left_Bottom_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->jumping_bunny_left_left_half = new_file_img
		("./textures/Jumping_Bunny_Left_Left_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->jumping_bunny_left_right_half = new_file_img
		("./textures/Jumping_Bunny_Left_Right_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->jumping_bunny_left_upper_half = new_file_img
		("./textures/Jumping_Bunny_Left_Upper_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->jumping_bunny_right_bottom_half = new_file_img
		("./textures/Jumping_Bunny_Right_Bottom_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->jumping_bunny_right_left_half = new_file_img
		("./textures/Jumping_Bunny_Right_Left_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->jumping_bunny_right_right_half = new_file_img
		("./textures/Jumping_Bunny_Right_Right_Half.xpm",
			info->vars->mlx, info->vars->window);
}

void	load_pictures7(t_info *info)
{
	info->halves->jumping_bunny_right_upper_half = new_file_img
		("./textures/Jumping_Bunny_Right_Upper_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->left_flame_bottom_half = new_file_img
		("./textures/Flame_Left_Bottom_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->left_flame_left_half = new_file_img
		("./textures/Flame_Left_Left_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->left_flame_right_half = new_file_img
		("./textures/Flame_Left_Right_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->left_flame_upper_half = new_file_img
		("./textures/Flame_Left_Upper_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->right_flame_bottom_half = new_file_img
		("./textures/Flame_Right_Bottom_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->right_flame_left_half = new_file_img
		("./textures/Flame_Right_Left_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->right_flame_right_half = new_file_img
		("./textures/Flame_Right_Right_Half.xpm",
			info->vars->mlx, info->vars->window);
}

int	load_pictures8(t_info *info)
{
	info->halves->right_flame_upper_half = new_file_img
		("./textures/Flame_Right_Upper_Half.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->upper_half_duck_facing_left = new_file_img
		("./textures/Duck_Left_Upper_Half_Turning_Left.xpm",
			info->vars->mlx, info->vars->window);
	info->halves->upper_half_duck_facing_right = new_file_img
		("./textures/Duck_Left_Upper_Half_Turning_Right.xpm",
			info->vars->mlx, info->vars->window);
	if (final_image_checker(info) == 0)
		return (0);
	info->imgs[0] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[0], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[0], info->images->bat, 0, 0);
	info->imgs[1] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[1], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[1], info->images->bat_wings_up, 0, 0);
	info->imgs[2] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[2], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[2], info->images->bunny_left, 0, 0);
	info->imgs[3] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[3], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[3], info->images->jumping_bunny_left, 0, 0);
	return (1);
}

void	load_pictures9(t_info *info)
{
	info->imgs[4] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[4], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[4], info->images->bunny_right, 0, 0);
	info->imgs[5] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[5], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[5], info->images->jumping_bunny_right, 0, 0);
	info->imgs[6] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[6], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[6], info->images->duck_right, 0, 0);
	info->imgs[7] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[7], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[7], info->images->duck_left, 0, 0);
	info->imgs[8] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[8], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[8], info->images->flame_left, 0, 0);
	info->imgs[9] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[9], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[9], info->images->flame_center, 0, 0);
	info->imgs[10] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[10], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[10], info->images->flame_right, 0, 0);
}

void	load_pictures10(t_info *info)
{
	info->imgs[11] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[11], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[11],
		info->halves->bottom_half_duck_facing_right, 0, 0);
	put_img_to_img(info->imgs[11], info->images->jumping_bunny_right, 0, 0);
	info->imgs[12] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[12], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[12],
		info->halves->bottom_half_duck_facing_left, 0, 0);
	put_img_to_img(info->imgs[12], info->images->jumping_bunny_right, 0, 0);
	info->imgs[13] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[13], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[13],
		info->halves->bottom_half_duck_facing_right, 0, 0);
	put_img_to_img(info->imgs[13], info->images->jumping_bunny_left, 0, 0);
	info->imgs[14] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[14], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[14],
		info->halves->bottom_half_duck_facing_left, 0, 0);
	put_img_to_img(info->imgs[14], info->images->jumping_bunny_left, 0, 0);
	info->imgs[15] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[15], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[15],
		info->halves->upper_half_duck_facing_right, 0, 0);
	put_img_to_img(info->imgs[15], info->images->jumping_bunny_right, 0, 0);
}
