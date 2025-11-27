/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:03 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 16:33:13 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#define M "Great job! You managed to collect all the ducks and escape safely!\n"

void	how_many_ducks(t_info *info)
{
	int	x;
	int	y;

	y = -1;
	while (info->map[++y])
	{
		x = -1;
		while (info->map[y][++x] && info->map[y][x] != '\n')
		{
			if (info->map[y][x] == 'C')
				info->collectibles++;
		}
	}
}

void	how_many_bats(t_info *info)
{
	int	x;
	int	y;

	info->enemies = 0;
	y = -1;
	while (info->map[++y])
	{
		x = -1;
		while (info->map[y][++x] && info->map[y][x] != '\n')
			if (info->map[y][x] == 'X' || info->map[y][x] == 'Y')
				new_bat(info, x, y, info->map[y][x]);
	}
}

void	print_error_message(int i)
{
	if (i == 1)
		prinf("There are no collectibles available!\n");
	else if (i == 2)
		prinf("There's no player available!\n");
	else if (i == 3)
		prinf("There's no exit available!\n");
	else if (i == 4)
		prinf("The map isn't a rectangle!\n");
	else if (i == 5)
		prinf("The map isn't surrounded by walls!\n");
	else if (i == 6)
		prinf("There's no way to get to the exit!\n");
	else if (i == 7)
		prinf("There's no way to get all collectibles!\n");
	else if (i == 8)
		prinf("There's strange characters on the map!\n");
	else if (i == 9)
		prinf(M);
	else if (i == 10)
		prinf("You got caught by a bat!\n");
	else if (i == 11)
		prinf("Are you quitting already?\n");
	else if (i == 12)
		prinf("Invalid filename!\n");
}

void	print_error_message2(int i)
{
	if (i == 13)
		prinf("Not enough arguments!\n");
	else if (i == 14)
		prinf("Too many arguments!\n");
	else if (i == 15)
		prinf("Failed to create one or more images!\n");
}
