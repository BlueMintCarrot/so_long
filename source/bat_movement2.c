/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat_movement2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:50:48 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 17:08:16 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	bat_right_and_left(t_info *info, int bat_nr)
{
	if (info->bat[bat_nr]->bat_direction == 6)
	{
		if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x + 1] == '0')
			bat_animation_right_wings_up(info, bat_nr);
		else if (info->map[info->bat[bat_nr]->y]
			[info->bat[bat_nr]->x + 1] == 'P')
			killed_by_a_bat(info, bat_nr);
	}
	else if (info->bat[bat_nr]->bat_direction == 4)
	{
		if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x - 1] == '0')
			bat_animation_left_wings_up(info, bat_nr);
		else if (info->map[info->bat[bat_nr]->y]
			[info->bat[bat_nr]->x - 1] == 'P')
			killed_by_a_bat(info, bat_nr);
	}
}

void	bat_up_and_down(t_info *info, int bat_nr)
{
	int	x;
	int	y;

	y = info->bat[bat_nr]->y;
	x = info->bat[bat_nr]->x;
	if (info->bat[bat_nr]->bat_direction == 8)
	{
		if (info->map[y - 1][x] == '0')
			bat_animation_up_wings_up(info, bat_nr);
		else if (info->map[y - 1][x] == 'P')
			killed_by_a_bat_again(info, bat_nr);
	}
	else if (info->bat[bat_nr]->bat_direction == 2)
	{
		if (info->map[y + 1][x] == '0')
			bat_animation_down_wings_up(info, bat_nr);
		else if (info->map[y + 1][x] == 'P')
			killed_by_a_bat_again(info, bat_nr);
	}
}

void	bat_right_and_left2(t_info *info, int bat_nr)
{
	if (info->bat[bat_nr]->bat_direction == 6)
	{
		if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x + 1] == '0')
			bat_animation_right(info, bat_nr);
	}
	else if (info->bat[bat_nr]->bat_direction == 4)
	{
		if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x - 1] == '0')
			bat_animation_left(info, bat_nr);
	}
}

void	bat_up_and_down2(t_info *info, int bat_nr)
{
	if (info->bat[bat_nr]->bat_direction == 8)
	{
		if (info->map[info->bat[bat_nr]->y - 1][info->bat[bat_nr]->x] == '0')
			bat_animation_up(info, bat_nr);
	}
	else if (info->bat[bat_nr]->bat_direction == 2)
	{
		if (info->map[info->bat[bat_nr]->y + 1][info->bat[bat_nr]->x] == '0')
			bat_animation_down(info, bat_nr);
	}
}
