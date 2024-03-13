/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:11:46 by joana             #+#    #+#             */
/*   Updated: 2024/03/07 00:18:31 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_picture10(t_vars *vars)
{
	vars->imgs[15] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[15], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[15], \
	vars->mapimgs->halves->bottom_half_duck_facing_right, 0, 0);
	put_img_to_img(vars->imgs[15], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[16] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[16], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[16], \
	vars->mapimgs->halves->bottom_half_duck_facing_left, 0, 0);
	put_img_to_img(vars->imgs[16], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[17] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[17], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[17], \
	vars->mapimgs->halves->upper_half_duck_facing_right, 0, 0);
	put_img_to_img(vars->imgs[17], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[18] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[18], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[18], \
	vars->mapimgs->halves->upper_half_duck_facing_left, 0, 0);
	put_img_to_img(vars->imgs[18], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[19] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[19], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[19], \
	vars->mapimgs->halves->upper_half_duck_facing_right, 0, 0);
	put_img_to_img(vars->imgs[19], vars->mapimgs->jumping_bunny_left, 0, 0);
}

void	load_picture11(t_vars *vars)
{
	vars->imgs[20] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[20], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[20], \
	vars->mapimgs->halves->upper_half_duck_facing_left, 0, 0);
	put_img_to_img(vars->imgs[20], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[21] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[21], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[21], \
	vars->mapimgs->halves->duck_tail_half_facing_right, 0, 0);
	put_img_to_img(vars->imgs[21], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[22] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[22], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[22], \
	vars->mapimgs->halves->duck_face_half_facing_left, 0, 0);
	put_img_to_img(vars->imgs[22], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[23] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[23], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[23], \
	vars->mapimgs->halves->duck_face_half_facing_right, 0, 0);
	put_img_to_img(vars->imgs[23], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[24] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[24], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[24], \
	vars->mapimgs->halves->duck_tail_half_facing_left, 0, 0);
	put_img_to_img(vars->imgs[24], vars->mapimgs->jumping_bunny_left, 0, 0);
}

void	load_picture12(t_vars *vars)
{
	vars->imgs[25] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[25], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[25], \
	vars->mapimgs->halves->left_flame_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[25], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[26] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[26], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[26], \
	vars->mapimgs->halves->left_flame_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[26], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[27] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[27], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[27], \
	vars->mapimgs->halves->left_flame_upper_half, 0, 0);
	put_img_to_img(vars->imgs[27], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[28] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[28], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[28], \
	vars->mapimgs->halves->left_flame_upper_half, 0, 0);
	put_img_to_img(vars->imgs[28], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[29] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[29], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[29], \
	vars->mapimgs->halves->left_flame_left_half, 0, 0);
	put_img_to_img(vars->imgs[29], vars->mapimgs->jumping_bunny_right, 0, 0);
}

void	load_picture13(t_vars *vars)
{
	vars->imgs[30] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[30], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[30], \
	vars->mapimgs->halves->left_flame_right_half, 0, 0);
	put_img_to_img(vars->imgs[30], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[31] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[31], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[31], \
	vars->mapimgs->halves->center_flame_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[31], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[32] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[32], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[32], \
	vars->mapimgs->halves->center_flame_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[32], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[33] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[33], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[33], \
	vars->mapimgs->halves->center_flame_upper_half, 0, 0);
	put_img_to_img(vars->imgs[33], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[34] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[34], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[34], \
	vars->mapimgs->halves->center_flame_upper_half, 0, 0);
	put_img_to_img(vars->imgs[34], vars->mapimgs->jumping_bunny_left, 0, 0);
}

void	load_picture14(t_vars *vars)
{
	vars->imgs[35] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[35], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[35], \
	vars->mapimgs->halves->center_flame_left_half, 0, 0);
	put_img_to_img(vars->imgs[35], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[36] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[36], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[36], \
	vars->mapimgs->halves->center_flame_right_half, 0, 0);
	put_img_to_img(vars->imgs[36], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[37] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[37], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[37], \
	vars->mapimgs->halves->right_flame_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[37], vars->mapimgs->jumping_bunny_right, 0, 0);
	vars->imgs[38] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[38], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[38], \
	vars->mapimgs->halves->right_flame_bottom_half, 0, 0);
	put_img_to_img(vars->imgs[38], vars->mapimgs->jumping_bunny_left, 0, 0);
	vars->imgs[39] = new_img(64, 64, vars->mlx, vars->window);
	put_img_to_img(vars->imgs[39], vars->imgs[1], 0, 0);
	put_img_to_img(vars->imgs[39], \
	vars->mapimgs->halves->right_flame_upper_half, 0, 0);
	put_img_to_img(vars->imgs[39], vars->mapimgs->jumping_bunny_right, 0, 0);
}
