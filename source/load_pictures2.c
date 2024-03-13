/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:11:16 by joana             #+#    #+#             */
/*   Updated: 2024/03/12 15:01:49 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_picture1(t_vars *vars, char **map)
{
	int	x;
	int	y;

	x = 64;
	y = 64;
	vars->map = map;
	vars->wall_ptr = mlx_xpm_file_to_image(vars->mlx, "./textures/Wall2.xpm", \
	&x, &y);
	vars->floor_ptr = mlx_xpm_file_to_image(vars->mlx, \
	"./textures/Floor_-50Brightness.xpm", &x, &y);
	vars->mapimgs = malloc(sizeof(t_mapimgs));
	vars->mapimgs->bunny_left = new_file_img("./textures/Bunny_Left.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->bat = new_file_img("./textures/Bat_64.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->bat_wings_up = new_file_img("./textures/Bat_Wings_Up64.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->duck_left = new_file_img("./textures/Duck_Left.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->duck_right = new_file_img("./textures/Duck_Right.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->flame_center = new_file_img("./textures/Flame_Center.xpm", \
	vars->mlx, vars->window);
}

void	load_picture2(t_vars *vars)
{
	vars->mapimgs->flame_left = new_file_img("./textures/Flame_Left.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->flame_right = new_file_img("./textures/Flame_Right.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->jumping_bunny_left = \
	new_file_img("./textures/Jumping_Bunny_Left.xpm", vars->mlx, vars->window);
	vars->mapimgs->jumping_bunny_right = \
	new_file_img("./textures/Jumping_Bunny_Right.xpm", vars->mlx, vars->window);
	vars->mapimgs->bunny_right = new_file_img("./textures/Bunny_Right.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->small_duck = new_file_img("./textures/Duck_Right32.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves = malloc(sizeof(t_halves));
	vars->mapimgs->halves->bottom_half_duck_facing_left = \
	new_file_img("./textures/Duck_Left_Bottom_Half_Turning_Left.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bottom_half_duck_facing_right = \
	new_file_img("./textures/Duck_Left_Bottom_Half_Turning_Right.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->duck_face_half_facing_left = \
	new_file_img("./textures/Duck_Left_Half_Turning_Left.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->duck_face_half_facing_right = \
	new_file_img("./textures/Duck_Right_Half_Turning_Right.xpm", \
	vars->mlx, vars->window);
}

void	load_picture3(t_vars *vars)
{
	vars->mapimgs->halves->duck_tail_half_facing_left = \
	new_file_img("./textures/Duck_Left_Right_Half_Turning_Left.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->duck_tail_half_facing_right = \
	new_file_img("./textures/Duck_Left_Right_Half_Turning_Right.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->upper_half_duck_facing_left = \
	new_file_img("./textures/Duck_Left_Upper_Half_Turning_Left.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->upper_half_duck_facing_right = \
	new_file_img("./textures/Duck_Left_Upper_Half_Turning_Right.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bat_bottom_half = \
	new_file_img("./textures/Bat_Bottom_Half.xpm", vars->mlx, vars->window);
	vars->mapimgs->halves->bat_left_half = \
	new_file_img("./textures/Bat_Left_Half.xpm", vars->mlx, vars->window);
	vars->mapimgs->halves->bat_right_half = \
	new_file_img("./textures/Bat_Right_Half.xpm", vars->mlx, vars->window);
	vars->mapimgs->halves->bat_upper_half = \
	new_file_img("./textures/Bat_Upper_Half.xpm", vars->mlx, vars->window);
	vars->mapimgs->halves->bat_wings_up_bottom_half = \
	new_file_img("./textures/Bat_Wings_Up_Bottom_Half.xpm", \
	vars->mlx, vars->window);
}

void	load_picture4(t_vars *vars)
{
	vars->mapimgs->halves->bat_wings_up_left_half = \
	new_file_img("./textures/Bat_Wings_Up_Left_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bat_wings_up_right_half = \
	new_file_img("./textures/Bat_Wings_Up_Right_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bat_wings_up_upper_half = \
	new_file_img("./textures/Bat_Wings_Up_Upper_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bunny_left_bottom_half = \
	new_file_img("./textures/Bunny_Left_Bottom_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bunny_left_left_half = \
	new_file_img("./textures/Bunny_Left_Left_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bunny_left_right_half = \
	new_file_img("./textures/Bunny_Left_Right_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bunny_left_upper_half = \
	new_file_img("./textures/Bunny_Left_Upper_Half.xpm", \
	vars->mlx, vars->window);
	vars->mapimgs->halves->bunny_right_bottom_half = \
	new_file_img("./textures/Bunny_Right_Bottom_Half.xpm", \
	vars->mlx, vars->window);
}
