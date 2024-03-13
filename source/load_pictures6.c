/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures6.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:15:08 by joana             #+#    #+#             */
/*   Updated: 2024/03/07 14:28:08 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_picture20(t_vars *vars)
{
	vars->imgs[65] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[65], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[65], \
	vars->mapimgs->halves->bunny_left_left_half, 0, 0);
	put_img_to_img(vars->imgs[65], vars->mapimgs->bat, 0, 0);
	vars->imgs[66] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[66], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[66], \
	vars->mapimgs->halves->bunny_left_left_half, 0, 0);
	put_img_to_img(vars->imgs[66], vars->mapimgs->bat_wings_up, 0, 0);
	vars->imgs[67] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[67], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[67], \
	vars->mapimgs->halves->bunny_right_right_half, 0, 0);
	put_img_to_img(vars->imgs[67], vars->mapimgs->bat, 0, 0);
	vars->imgs[68] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[68], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[68], \
	vars->mapimgs->halves->bunny_right_right_half, 0, 0);
	put_img_to_img(vars->imgs[68], vars->mapimgs->bat_wings_up, 0, 0);
	vars->imgs[69] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[69], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[69], \
	vars->mapimgs->halves->bunny_left_right_half, 0, 0);
	put_img_to_img(vars->imgs[69], vars->mapimgs->bat, 0, 0);
}

void	load_picture21(t_vars *vars)
{
	vars->imgs[70] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[70], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[70], \
	vars->mapimgs->halves->bunny_left_right_half, 0, 0);
	put_img_to_img(vars->imgs[70], vars->mapimgs->bat_wings_up, 0, 0);
	vars->imgs[71] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[71], vars->imgs[0], 0, 0);
	put_img_to_img(vars->imgs[71], vars->mapimgs->small_duck, 0, 16);
	vars->imgs[72] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[72], vars->imgs[71], 0, 0);
	put_img_to_img(vars->imgs[72], vars->mapimgs->small_duck, 32, 16);
	mlx_destroy_image(vars->mlx, vars->mapimgs->bunny_left->img);
	free(vars->mapimgs->bunny_left);
	mlx_destroy_image(vars->mlx, vars->mapimgs->bat->img);
	free(vars->mapimgs->bat);
	mlx_destroy_image(vars->mlx, vars->mapimgs->bat_wings_up->img);
	free(vars->mapimgs->bat_wings_up);
	mlx_destroy_image(vars->mlx, vars->mapimgs->duck_left->img);
	free(vars->mapimgs->duck_left);
	mlx_destroy_image(vars->mlx, vars->mapimgs->duck_right->img);
	free(vars->mapimgs->duck_right);
}

void	load_picture22(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, vars->mapimgs->flame_center->img);
	free(vars->mapimgs->flame_center);
	mlx_destroy_image(vars->mlx, vars->mapimgs->flame_left->img);
	free(vars->mapimgs->flame_left);
	mlx_destroy_image(vars->mlx, vars->mapimgs->flame_right->img);
	free(vars->mapimgs->flame_right);
	mlx_destroy_image(vars->mlx, vars->mapimgs->jumping_bunny_left->img);
	free(vars->mapimgs->jumping_bunny_left);
	mlx_destroy_image(vars->mlx, vars->mapimgs->jumping_bunny_right->img);
	free(vars->mapimgs->jumping_bunny_right);
	mlx_destroy_image(vars->mlx, vars->mapimgs->bunny_right->img);
	free(vars->mapimgs->bunny_right);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bottom_half_duck_facing_left->img);
	free(vars->mapimgs->halves->bottom_half_duck_facing_left);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bottom_half_duck_facing_right->img);
	free(vars->mapimgs->halves->bottom_half_duck_facing_right);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->duck_face_half_facing_left->img);
	free(vars->mapimgs->halves->duck_face_half_facing_left);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->duck_face_half_facing_right->img);
	free(vars->mapimgs->halves->duck_face_half_facing_right);
}

void	load_picture23(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->duck_tail_half_facing_left->img);
	free(vars->mapimgs->halves->duck_tail_half_facing_left);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->duck_tail_half_facing_right->img);
	free(vars->mapimgs->halves->duck_tail_half_facing_right);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->upper_half_duck_facing_left->img);
	free(vars->mapimgs->halves->upper_half_duck_facing_left);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->upper_half_duck_facing_right->img);
	free(vars->mapimgs->halves->upper_half_duck_facing_right);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bat_bottom_half->img);
	free(vars->mapimgs->halves->bat_bottom_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bat_left_half->img);
	free(vars->mapimgs->halves->bat_left_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bat_right_half->img);
	free(vars->mapimgs->halves->bat_right_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bat_upper_half->img);
	free(vars->mapimgs->halves->bat_upper_half);
}

void	load_picture24(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bat_wings_up_bottom_half->img);
	free(vars->mapimgs->halves->bat_wings_up_bottom_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bat_wings_up_left_half->img);
	free(vars->mapimgs->halves->bat_wings_up_left_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bat_wings_up_right_half->img);
	free(vars->mapimgs->halves->bat_wings_up_right_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bat_wings_up_upper_half->img);
	free(vars->mapimgs->halves->bat_wings_up_upper_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bunny_left_bottom_half->img);
	free(vars->mapimgs->halves->bunny_left_bottom_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bunny_left_left_half->img);
	free(vars->mapimgs->halves->bunny_left_left_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bunny_left_right_half->img);
	free(vars->mapimgs->halves->bunny_left_right_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bunny_left_upper_half->img);
	free(vars->mapimgs->halves->bunny_left_upper_half);
}
