/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:11:19 by joana             #+#    #+#             */
/*   Updated: 2024/03/12 15:02:06 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_picture5(t_vars *vars)
{
	vars->mapimgs->halves->bunny_right_left_half = \
	new_file_img("./textures/Bunny_Right_Left_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bunny_right_right_half = \
	new_file_img("./textures/Bunny_Right_Right_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bunny_right_upper_half = \
	new_file_img("./textures/Bunny_Right_Upper_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->center_flame_bottom_half = \
	new_file_img("./textures/Flame_Center_Bottom_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->center_flame_left_half = \
	new_file_img("./textures/Flame_Center_Left_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->center_flame_right_half = \
	new_file_img("./textures/Flame_Center_Right_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->center_flame_upper_half = \
	new_file_img("./textures/Flame_Center_Upper_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->jumping_bunny_left_bottom_half = \
	new_file_img("./textures/Jumping_Bunny_Left_Bottom_Half.xpm", \
	vars->mlx, vars->window);
}

void	load_picture6(t_vars *vars)
{
	vars->mapimgs->halves->jumping_bunny_left_left_half = \
	new_file_img("./textures/Jumping_Bunny_Left_Left_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->jumping_bunny_left_right_half = \
	new_file_img("./textures/Jumping_Bunny_Left_Right_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->jumping_bunny_left_upper_half = \
	new_file_img("./textures/Jumping_Bunny_Left_Upper_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->jumping_bunny_right_bottom_half = \
	new_file_img("./textures/Jumping_Bunny_Right_Bottom_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->jumping_bunny_right_left_half = \
	new_file_img("./textures/Jumping_Bunny_Right_Left_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->jumping_bunny_right_right_half = \
	new_file_img("./textures/Jumping_Bunny_Right_Right_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->jumping_bunny_right_upper_half = \
	new_file_img("./textures/Jumping_Bunny_Right_Upper_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->left_flame_bottom_half = \
	new_file_img("./textures/Flame_Left_Bottom_Half.xpm", \
	vars->mlx, vars->window);
}

void	load_picture7(t_vars *vars)
{
	vars->mapimgs->halves->left_flame_left_half = \
	new_file_img("./textures/Flame_Left_Left_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->left_flame_right_half = \
	new_file_img("./textures/Flame_Left_Right_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->left_flame_upper_half = \
	new_file_img("./textures/Flame_Left_Upper_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->right_flame_bottom_half = \
	new_file_img("./textures/Flame_Right_Bottom_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->right_flame_left_half = \
	new_file_img("./textures/Flame_Right_Left_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->right_flame_right_half = \
	new_file_img("./textures/Flame_Right_Right_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->right_flame_upper_half = \
	new_file_img("./textures/Flame_Right_Upper_Half.xpm", \
	vars->mlx, vars->window);
	vars->imgs[0] = new_file_img("./textures/Wall2.xpm", \
	vars->mlx, vars->window);
}

void	load_picture8(t_vars *vars)
{
	vars->imgs[1] = \
	new_file_img("./textures/Floor_-50Brightness.xpm", \
	vars->mlx, vars->window);
	vars->imgs[2] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[2], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[2], vars->mapimgs->bat, 0, 0);
	vars->imgs[3] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[3], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[3], vars->mapimgs->bat_wings_up, 0, 0);
	vars->imgs[4] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[4], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[4], vars->mapimgs->bunny_left, 0, 0);
	vars->imgs[5] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[5], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[5], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[6] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[6], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[6], vars->mapimgs->bunny_right, 0, 0);
	vars->imgs[7] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[7], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[7], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[8] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[8], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[8], vars->mapimgs->duck_right, 0, 0);
}

void	load_picture9(t_vars *vars)
{
	vars->imgs[9] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[9], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[9], vars->mapimgs->duck_left, 0, 0);
	vars->imgs[10] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[10], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[10], vars->mapimgs->flame_left, 0, 0);
	vars->imgs[11] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[11], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[11], vars->mapimgs->flame_center, 0, 0);
	vars->imgs[12] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[12], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[12], vars->mapimgs->flame_right, 0, 0);
	vars->imgs[13] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[13], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[13], \
	vars->mapimgs->halves->bottom_half_duck_facing_right, 0, 0);
	put_img_to_img(vars->imgs[13], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[14] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[14], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[14], \
	vars->mapimgs->halves->bottom_half_duck_facing_left, 0, 0);
	put_img_to_img(vars->imgs[14], vars->mapimgs->jumping_bunny_right, 0, 0);
}
