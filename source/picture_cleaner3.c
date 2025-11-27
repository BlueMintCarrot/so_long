/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   picture_cleaner3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:55:52 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 15:58:45 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_pictures4(t_info *info)
{
	if (info->halves->duck_tail_half_facing_left)
		free(info->halves->duck_tail_half_facing_left);
	if (info->halves->duck_tail_half_facing_right)
		free(info->halves->duck_tail_half_facing_right);
	if (info->halves->jumping_bunny_left_bottom_half)
		free(info->halves->jumping_bunny_left_bottom_half);
	if (info->halves->jumping_bunny_left_left_half)
		free(info->halves->jumping_bunny_left_left_half);
	if (info->halves->jumping_bunny_left_right_half)
		free(info->halves->jumping_bunny_left_right_half);
	if (info->halves->jumping_bunny_left_upper_half)
		free(info->halves->jumping_bunny_left_upper_half);
	if (info->halves->jumping_bunny_right_bottom_half)
		free(info->halves->jumping_bunny_right_bottom_half);
	if (info->halves->jumping_bunny_right_left_half)
		free(info->halves->jumping_bunny_right_left_half);
	if (info->halves->jumping_bunny_right_right_half)
		free(info->halves->jumping_bunny_right_right_half);
	if (info->halves->jumping_bunny_right_upper_half)
		free(info->halves->jumping_bunny_right_upper_half);
	if (info->halves->left_flame_bottom_half)
		free(info->halves->left_flame_bottom_half);
	if (info->halves->left_flame_left_half)
		free(info->halves->left_flame_left_half);
}

void	free_pictures5(t_info *info)
{
	if (info->halves->left_flame_right_half)
		free(info->halves->left_flame_right_half);
	if (info->halves->left_flame_upper_half)
		free(info->halves->left_flame_upper_half);
	if (info->halves->right_flame_bottom_half)
		free(info->halves->right_flame_bottom_half);
	if (info->halves->right_flame_left_half)
		free(info->halves->right_flame_left_half);
	if (info->halves->right_flame_right_half)
		free(info->halves->right_flame_right_half);
	if (info->halves->right_flame_upper_half)
		free(info->halves->right_flame_upper_half);
	if (info->halves->upper_half_duck_facing_left)
		free(info->halves->upper_half_duck_facing_left);
	if (info->halves->upper_half_duck_facing_right)
		free(info->halves->upper_half_duck_facing_right);
}

void	picture_cleaner(t_info *info)
{
	destroy_pictures1(info);
	destroy_pictures2(info);
	destroy_pictures3(info);
	destroy_pictures4(info);
	destroy_pictures5(info);
	destroy_pictures6(info);
	destroy_pictures7(info);
	free_pictures1(info);
	free_pictures2(info);
	free_pictures3(info);
	free_pictures4(info);
	free_pictures5(info);
}
