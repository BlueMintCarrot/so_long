/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:11:57 by joana             #+#    #+#             */
/*   Updated: 2024/03/26 20:06:26 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_picture15(t_vars *vars)
{
	vars->imgs[40] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[40], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[40], \
	vars->mapimgs->halves->right_flame_upper_half, 0, 0);
	put_img_to_img(vars->imgs[40], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[41] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[41], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[41], \
	vars->mapimgs->halves->right_flame_left_half, 0, 0);
	put_img_to_img(vars->imgs[41], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[42] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[42], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[42], \
	vars->mapimgs->halves->right_flame_right_half, 0, 0);
	put_img_to_img(vars->imgs[42], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[43] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[43], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[43], \
	vars->mapimgs->halves->bat_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[43], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[44] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[44], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[44], \
	vars->mapimgs->halves->bat_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[44], vars->mapimgs->jumping_bunny_left, 0, 0);
}

void	load_picture16(t_vars *vars)
{
	vars->imgs[45] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[45], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[45], \
	vars->mapimgs->halves->bat_wings_up_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[45], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[46] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[46], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[46], \
	vars->mapimgs->halves->bat_wings_up_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[46], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[47] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[47], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[47], \
	vars->mapimgs->halves->bat_upper_half, 0, 0);
	put_img_to_img(vars->imgs[47], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[48] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[48], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[48], vars->mapimgs->halves->bat_upper_half, 0, 0);
	put_img_to_img(vars->imgs[48], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[49] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[49], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[49], \
	vars->mapimgs->halves->bat_wings_up_upper_half, 0, 0);
	put_img_to_img(vars->imgs[49], vars->mapimgs->jumping_bunny_right, 0, 0);
}

void	load_picture17(t_vars *vars)
{
	vars->imgs[50] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[50], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[50], \
	vars->mapimgs->halves->bat_wings_up_upper_half, 0, 0);
	put_img_to_img(vars->imgs[50], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[51] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[51], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[51], vars->mapimgs->halves->bat_left_half, 0, 0);
	put_img_to_img(vars->imgs[51], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[52] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[52], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[52], \
	vars->mapimgs->halves->bat_wings_up_left_half, 0, 0);
	put_img_to_img(vars->imgs[52], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[53] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[53], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[53], vars->mapimgs->halves->bat_right_half, 0, 0);
	put_img_to_img(vars->imgs[53], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[54] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[54], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[54], \
	vars->mapimgs->halves->bat_wings_up_right_half, 0, 0);
	put_img_to_img(vars->imgs[54], vars->mapimgs->jumping_bunny_left, 0, 0);
}

void	load_picture18(t_vars *vars)
{
	vars->imgs[55] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[55], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[55], \
	vars->mapimgs->halves->bunny_right_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[55], vars->mapimgs->bat, 0, 0);
	vars->imgs[56] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[56], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[56], \
	vars->mapimgs->halves->bunny_left_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[56], vars->mapimgs->bat, 0, 0);
	vars->imgs[57] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[57], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[57], \
	vars->mapimgs->halves->bunny_right_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[57], vars->mapimgs->bat_wings_up, 0, 0);
	vars->imgs[58] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[58], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[58], \
	vars->mapimgs->halves->bunny_left_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[58], vars->mapimgs->bat_wings_up, 0, 0);
	vars->imgs[59] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[59], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[59], \
	vars->mapimgs->halves->bunny_right_upper_half, 0, 0);
	put_img_to_img(vars->imgs[59], vars->mapimgs->bat, 0, 0);
}

void	load_picture19(t_vars *vars)
{
	vars->imgs[60] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[60], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[60], \
	vars->mapimgs->halves->bunny_left_upper_half, 0, 0);
	put_img_to_img(vars->imgs[60], vars->mapimgs->bat, 0, 0);
	vars->imgs[61] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[61], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[61], \
	vars->mapimgs->halves->bunny_right_upper_half, 0, 0);
	put_img_to_img(vars->imgs[61], vars->mapimgs->bat_wings_up, 0, 0);
	vars->imgs[62] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[62], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[62], \
	vars->mapimgs->halves->bunny_left_upper_half, 0, 0);
	put_img_to_img(vars->imgs[62], vars->mapimgs->bat_wings_up, 0, 0);
	vars->imgs[63] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[63], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[63], \
	vars->mapimgs->halves->bunny_right_left_half, 0, 0);
	put_img_to_img(vars->imgs[63], vars->mapimgs->bat, 0, 0);
	vars->imgs[64] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[64], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[64], \
	vars->mapimgs->halves->bunny_right_left_half, 0, 0);
	put_img_to_img(vars->imgs[64], vars->mapimgs->bat_wings_up, 0, 0);
}
