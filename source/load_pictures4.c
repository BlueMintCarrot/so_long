/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:34 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 20:47:49 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_pictures11(t_info *info)
{
	info->imgs[16] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[16], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[16],
		info->halves->upper_half_duck_facing_left, 0, 0);
	put_img_to_img(info->imgs[16], info->images->jumping_bunny_right, 0, 0);
	info->imgs[17] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[17], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[17],
		info->halves->upper_half_duck_facing_right, 0, 0);
	put_img_to_img(info->imgs[17], info->images->jumping_bunny_left, 0, 0);
	info->imgs[18] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[18], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[18],
		info->halves->upper_half_duck_facing_left, 0, 0);
	put_img_to_img(info->imgs[18], info->images->jumping_bunny_left, 0, 0);
	info->imgs[19] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[19], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[19],
		info->halves->duck_tail_half_facing_right, 0, 0);
	put_img_to_img(info->imgs[19], info->images->jumping_bunny_right, 0, 0);
	info->imgs[20] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[20], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[20],
		info->halves->duck_tail_half_facing_left, 0, 0);
	put_img_to_img(info->imgs[20], info->images->jumping_bunny_left, 0, 0);
}

void	load_pictures12(t_info *info)
{
	info->imgs[21] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[21], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[21],
		info->halves->duck_face_half_facing_right, 0, 0);
	put_img_to_img(info->imgs[21], info->images->jumping_bunny_left, 0, 0);
	info->imgs[22] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[22], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[22],
		info->halves->duck_face_half_facing_left, 0, 0);
	put_img_to_img(info->imgs[22], info->images->jumping_bunny_right, 0, 0);
	info->imgs[23] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[23], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[23],
		info->halves->left_flame_bottom_half, 0, 0);
	put_img_to_img(info->imgs[23], info->images->jumping_bunny_right, 0, 0);
	info->imgs[24] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[24], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[24],
		info->halves->left_flame_bottom_half, 0, 0);
	put_img_to_img(info->imgs[24], info->images->jumping_bunny_left, 0, 0);
	info->imgs[25] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[25], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[25],
		info->halves->left_flame_upper_half, 0, 0);
	put_img_to_img(info->imgs[25], info->images->jumping_bunny_right, 0, 0);
}

void	load_pictures13(t_info *info)
{
	info->imgs[26] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[26], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[26],
		info->halves->left_flame_upper_half, 0, 0);
	put_img_to_img(info->imgs[26], info->images->jumping_bunny_left, 0, 0);
	info->imgs[27] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[27], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[27],
		info->halves->left_flame_left_half, 0, 0);
	put_img_to_img(info->imgs[27], info->images->jumping_bunny_right, 0, 0);
	info->imgs[28] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[28], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[28],
		info->halves->left_flame_right_half, 0, 0);
	put_img_to_img(info->imgs[28], info->images->jumping_bunny_left, 0, 0);
	info->imgs[29] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[29], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[29],
		info->halves->center_flame_bottom_half, 0, 0);
	put_img_to_img(info->imgs[29], info->images->jumping_bunny_right, 0, 0);
	info->imgs[30] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[30], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[30],
		info->halves->center_flame_bottom_half, 0, 0);
	put_img_to_img(info->imgs[30], info->images->jumping_bunny_left, 0, 0);
}

void	load_pictures14(t_info *info)
{
	info->imgs[31] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[31], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[31],
		info->halves->center_flame_upper_half, 0, 0);
	put_img_to_img(info->imgs[31], info->images->jumping_bunny_right, 0, 0);
	info->imgs[32] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[32], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[32],
		info->halves->center_flame_upper_half, 0, 0);
	put_img_to_img(info->imgs[32], info->images->jumping_bunny_left, 0, 0);
	info->imgs[33] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[33], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[33],
		info->halves->center_flame_left_half, 0, 0);
	put_img_to_img(info->imgs[33], info->images->jumping_bunny_right, 0, 0);
	info->imgs[34] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[34], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[34],
		info->halves->center_flame_right_half, 0, 0);
	put_img_to_img(info->imgs[34], info->images->jumping_bunny_left, 0, 0);
	info->imgs[35] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[35], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[35],
		info->halves->right_flame_bottom_half, 0, 0);
	put_img_to_img(info->imgs[35], info->images->jumping_bunny_right, 0, 0);
}

void	load_pictures15(t_info *info)
{
	info->imgs[36] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[36],
		info->images->floor, 0, 0);
	put_img_to_img(info->imgs[36], info->halves->right_flame_bottom_half, 0, 0);
	put_img_to_img(info->imgs[36], info->images->jumping_bunny_left, 0, 0);
	info->imgs[37] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[37], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[37],
		info->halves->right_flame_upper_half, 0, 0);
	put_img_to_img(info->imgs[37], info->images->jumping_bunny_right, 0, 0);
	info->imgs[38] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[38], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[38],
		info->halves->right_flame_upper_half, 0, 0);
	put_img_to_img(info->imgs[38], info->images->jumping_bunny_left, 0, 0);
	info->imgs[39] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[39], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[39],
		info->halves->right_flame_left_half, 0, 0);
	put_img_to_img(info->imgs[39], info->images->jumping_bunny_right, 0, 0);
	info->imgs[40] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[40], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[40],
		info->halves->right_flame_right_half, 0, 0);
	put_img_to_img(info->imgs[40], info->images->jumping_bunny_left, 0, 0);
}
