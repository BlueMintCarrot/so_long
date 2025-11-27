/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:28 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 15:28:44 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	load_pictures(t_info *info)
{
	if (!load_pictures1(info) || !load_pictures2(info) || !load_pictures8(info))
		return (0);
	(load_pictures3(info), load_pictures4(info), load_pictures5(info));
	(load_pictures6(info), load_pictures7(info), load_pictures9(info));
	(load_pictures10(info), load_pictures11(info), load_pictures12(info));
	(load_pictures13(info), load_pictures14(info), load_pictures15(info));
	(load_pictures16(info), load_pictures17(info), load_pictures18(info));
	(load_pictures19(info), load_pictures20(info), picture_cleaner(info));
	load_stuff(info);
	return (1);
}

int	image_check(t_info *info)
{
	if (!info->images->bat || !info->images->bat_wings_up
		|| !info->images->bunny_left || !info->images->bunny_right
		|| !info->images->duck_left || !info->images->duck_right
		|| !info->images->flame_center || !info->images->flame_left
		|| !info->images->flame_right || !info->images->floor
		|| !info->images->jumping_bunny_left
		|| !info->images->jumping_bunny_right
		|| !info->images->small_duck || !info->images->wall)
		return (0);
	return (1);
}

int	halves_check(t_info *info)
{
	if (!info->halves->bat_bottom_half || !info->halves->bat_left_half
		|| !info->halves->bat_right_half || !info->halves->bat_upper_half
		|| !info->halves->bat_wings_up_bottom_half
		|| !info->halves->bat_wings_up_left_half
		|| !info->halves->bat_wings_up_right_half
		|| !info->halves->bat_wings_up_upper_half
		|| !info->halves->bottom_half_duck_facing_left
		|| !info->halves->bottom_half_duck_facing_right
		|| !info->halves->bunny_left_bottom_half
		|| !info->halves->bunny_left_left_half
		|| !info->halves->bunny_left_right_half
		|| !info->halves->bunny_left_upper_half
		|| !info->halves->bunny_right_bottom_half
		|| !info->halves->bunny_right_left_half
		|| !info->halves->bunny_right_right_half
		|| !info->halves->bunny_right_upper_half
		|| !info->halves->center_flame_bottom_half
		|| !info->halves->center_flame_left_half
		|| !info->halves->center_flame_right_half
		|| !info->halves->center_flame_upper_half
		|| !info->halves->duck_face_half_facing_left
		|| !info->halves->duck_face_half_facing_right
		|| !info->halves->duck_tail_half_facing_left)
		return (0);
	return (1);
}

int	halves_check2(t_info *info)
{
	if (!info->halves->duck_tail_half_facing_right
		|| !info->halves->jumping_bunny_left_bottom_half
		|| !info->halves->jumping_bunny_left_left_half
		|| !info->halves->jumping_bunny_left_right_half
		|| !info->halves->jumping_bunny_left_upper_half
		|| !info->halves->jumping_bunny_right_bottom_half
		|| !info->halves->jumping_bunny_right_left_half
		|| !info->halves->jumping_bunny_right_right_half
		|| !info->halves->jumping_bunny_right_upper_half
		|| !info->halves->left_flame_bottom_half
		|| !info->halves->left_flame_left_half
		|| !info->halves->left_flame_right_half
		|| !info->halves->left_flame_upper_half
		|| !info->halves->right_flame_bottom_half
		|| !info->halves->right_flame_left_half
		|| !info->halves->right_flame_right_half
		|| !info->halves->right_flame_upper_half
		|| !info->halves->upper_half_duck_facing_left
		|| !info->halves->upper_half_duck_facing_right)
		return (0);
	return (1);
}

int	final_image_checker(t_info *info)
{
	if (!image_check(info) || !halves_check(info) || !halves_check2(info))
		return (print_error_message2(15), 0);
	return (1);
}
