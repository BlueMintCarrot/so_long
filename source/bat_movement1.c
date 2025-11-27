/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat_movement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:50:45 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 15:37:52 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	new_bat(t_info *info, int x, int y, char c)
{
	if (info->map[y][x] == 'X')
	{
		info->bat[info->enemies] = malloc(sizeof(t_bat));
		if (!info->bat[info->enemies])
			return (0);
		info->bat[info->enemies]->bat_direction = 6;
		info->bat[info->enemies]->x = x;
		info->bat[info->enemies]->y = y;
		info->bat[info->enemies]->bat_type = c;
		info->enemies++;
	}
	else if (info->map[y][x] == 'Y')
	{
		info->bat[info->enemies] = malloc(sizeof(t_bat));
		if (!info->bat[info->enemies])
			return (0);
		info->bat[info->enemies]->bat_direction = 8;
		info->bat[info->enemies]->x = x;
		info->bat[info->enemies]->y = y;
		info->bat[info->enemies]->bat_type = c;
		info->enemies++;
	}
	return (1);
}

void	bat_animation(t_info *info)
{
	static int	i;

	where_the_fuck_is_the_bunny(info);
	if (i < 2250)
		bat(info);
	else if (i < 4500)
		bat2(info);
	if (i == 4500)
	{
		bat_list(info);
		i = 0;
	}
	i++;
}

void	bat_list(t_info *info)
{
	int	bat_nr;

	bat_nr = -1;
	while (++bat_nr < info->enemies)
	{
		if (info->bat[bat_nr]->bat_direction == 6)
			bat_movement(info, 1, 0, bat_nr);
		else if (info->bat[bat_nr]->bat_direction == 4)
			bat_movement(info, -1, 0, bat_nr);
		else if (info->bat[bat_nr]->bat_direction == 8)
			bat_movement(info, 0, -1, bat_nr);
		else if (info->bat[bat_nr]->bat_direction == 2)
			bat_movement(info, 0, 1, bat_nr);
	}
}

void	bat_movement(t_info *info, int x, int y, int bat_nr)
{
	if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]-> x + x] == 'P'
		&& info->bat[bat_nr]->bat_type == 'X')
		quit_bat(info);
	else if (info->map[info->bat[bat_nr]->y][info->bat[bat_nr]-> x + x] == '0'
		&& info->bat[bat_nr]->bat_type == 'X')
	{
		info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x] = '0';
		info->bat[bat_nr]->x += x;
		info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x] = 'X';
	}
	else if (info->map[info->bat[bat_nr]->y + y][info->bat[bat_nr]->x] == 'P'
		&& info->bat[bat_nr]->bat_type == 'Y')
		quit_bat(info);
	else if (info->map[info->bat[bat_nr]->y + y][info->bat[bat_nr]->x] == '0'
		&& info->bat[bat_nr]->bat_type == 'Y')
	{
		info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x] = '0';
		info->bat[bat_nr]->y += y;
		info->map[info->bat[bat_nr]->y][info->bat[bat_nr]->x] = 'Y';
	}
	else
		change_bat_direction(info, bat_nr);
}

void	change_bat_direction(t_info *info, int bat_nr)
{
	if (info->bat[bat_nr]->bat_type == 'X'
		&& info->bat[bat_nr]->bat_direction == 6)
		info->bat[bat_nr]->bat_direction = 4;
	else if (info->bat[bat_nr]->bat_type == 'X'
		&& info->bat[bat_nr]->bat_direction == 4)
		info->bat[bat_nr]->bat_direction = 6;
	else if (info->bat[bat_nr]->bat_type == 'Y'
		&& info->bat[bat_nr]->bat_direction == 8)
		info->bat[bat_nr]->bat_direction = 2;
	else if (info->bat[bat_nr]->bat_type == 'Y'
		&& info->bat[bat_nr]->bat_direction == 2)
		info->bat[bat_nr]->bat_direction = 8;
}
