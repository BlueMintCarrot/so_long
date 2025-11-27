/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ducks2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:01 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 15:22:05 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ducks_up(t_info *info, int x, int y)
{
	if (info->map[y - 1][x] == 'C')
	{
		ducks_captured(info);
		info->collectibles--;
	}
	info->map[y][x] = '0';
	info->map[y - 1][x] = 'P';
}

void	ducks_down(t_info *info, int x, int y)
{
	if (info->map[y + 1][x] == 'C')
	{
		ducks_captured(info);
		info->collectibles--;
	}
	info->map[y][x] = '0';
	info->map[y + 1][x] = 'P';
}

void	ducks_left(t_info *info, int x, int y)
{
	if (info->map[y][x - 1] == 'C')
	{
		ducks_captured(info);
		info->collectibles--;
	}
	info->map[y][x] = '0';
	info->map[y][x - 1] = 'P';
}

void	ducks_right(t_info *info, int x, int y)
{
	if (info->map[y][x + 1] == 'C')
	{
		ducks_captured(info);
		info->collectibles--;
	}
	info->map[y][x] = '0';
	info->map[y][x + 1] = 'P';
}
