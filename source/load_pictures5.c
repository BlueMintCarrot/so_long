/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:36 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 15:36:08 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_pictures16(t_info *info)
{
	info->imgs[41] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[41], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[41],
		info->halves->bat_bottom_half, 0, 0);
	put_img_to_img(info->imgs[41], info->images->jumping_bunny_right, 0, 0);
	info->imgs[42] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[42], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[42],
		info->halves->bat_bottom_half, 0, 0);
	put_img_to_img(info->imgs[42], info->images->jumping_bunny_left, 0, 0);
	info->imgs[43] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[43], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[43],
		info->halves->bat_wings_up_bottom_half, 0, 0);
	put_img_to_img(info->imgs[43], info->images->jumping_bunny_right, 0, 0);
	info->imgs[44] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[44], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[44],
		info->halves->bat_wings_up_bottom_half, 0, 0);
	put_img_to_img(info->imgs[44], info->images->jumping_bunny_left, 0, 0);
	info->imgs[45] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[45], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[45],
		info->halves->bat_upper_half, 0, 0);
	put_img_to_img(info->imgs[45], info->images->jumping_bunny_right, 0, 0);
}

void	load_pictures17(t_info *info)
{
	info->imgs[46] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[46], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[46],
		info->halves->bat_upper_half, 0, 0);
	put_img_to_img(info->imgs[46], info->images->jumping_bunny_left, 0, 0);
	info->imgs[47] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[47], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[47],
		info->halves->bat_wings_up_upper_half, 0, 0);
	put_img_to_img(info->imgs[47], info->images->jumping_bunny_right, 0, 0);
	info->imgs[48] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[48], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[48],
		info->halves->bat_wings_up_upper_half, 0, 0);
	put_img_to_img(info->imgs[48], info->images->jumping_bunny_left, 0, 0);
	info->imgs[49] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[49], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[49],
		info->halves->bat_left_half, 0, 0);
	put_img_to_img(info->imgs[49], info->images->jumping_bunny_right, 0, 0);
	info->imgs[50] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[50], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[50],
		info->halves->bat_wings_up_left_half, 0, 0);
	put_img_to_img(info->imgs[50], info->images->jumping_bunny_right, 0, 0);
}

void	load_pictures18(t_info *info)
{
	info->imgs[51] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[51], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[51],
		info->halves->bat_right_half, 0, 0);
	put_img_to_img(info->imgs[51], info->images->jumping_bunny_left, 0, 0);
	info->imgs[52] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[52], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[52],
		info->halves->bat_wings_up_right_half, 0, 0);
	put_img_to_img(info->imgs[52], info->images->jumping_bunny_left, 0, 0);
	info->imgs[53] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[53], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[53],
		info->halves->bunny_right_bottom_half, 0, 0);
	put_img_to_img(info->imgs[53], info->images->bat, 0, 0);
	info->imgs[54] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[54], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[54],
		info->halves->bunny_left_bottom_half, 0, 0);
	put_img_to_img(info->imgs[54], info->images->bat, 0, 0);
	info->imgs[55] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[55], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[55],
		info->halves->bunny_right_bottom_half, 0, 0);
	put_img_to_img(info->imgs[55], info->images->bat_wings_up, 0, 0);
}

void	load_pictures19(t_info *info)
{
	info->imgs[56] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[56], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[56],
		info->halves->bunny_left_bottom_half, 0, 0);
	put_img_to_img(info->imgs[56], info->images->bat_wings_up, 0, 0);
	info->imgs[57] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[57], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[57],
		info->halves->bunny_right_upper_half, 0, 0);
	put_img_to_img(info->imgs[57], info->images->bat, 0, 0);
	info->imgs[58] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[58], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[58],
		info->halves->bunny_left_upper_half, 0, 0);
	put_img_to_img(info->imgs[58], info->images->bat, 0, 0);
	info->imgs[59] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[59], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[59],
		info->halves->bunny_right_upper_half, 0, 0);
	put_img_to_img(info->imgs[59], info->images->bat_wings_up, 0, 0);
	info->imgs[60] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[60], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[60],
		info->halves->bunny_left_upper_half, 0, 0);
	put_img_to_img(info->imgs[60], info->images->bat_wings_up, 0, 0);
}

void	load_pictures20(t_info *info)
{
	info->imgs[61] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[61], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[61],
		info->halves->bunny_right_left_half, 0, 0);
	put_img_to_img(info->imgs[61], info->images->bat, 0, 0);
	info->imgs[62] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[62], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[62],
		info->halves->bunny_right_left_half, 0, 0);
	put_img_to_img(info->imgs[62], info->images->bat_wings_up, 0, 0);
	info->imgs[63] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[63], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[63],
		info->halves->bunny_left_left_half, 0, 0);
	put_img_to_img(info->imgs[63], info->images->bat, 0, 0);
	info->imgs[64] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[64], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[64],
		info->halves->bunny_left_left_half, 0, 0);
	put_img_to_img(info->imgs[64], info->images->bat_wings_up, 0, 0);
	info->imgs[65] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[65], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[65],
		info->halves->bunny_right_right_half, 0, 0);
	put_img_to_img(info->imgs[65], info->images->bat, 0, 0);
}
