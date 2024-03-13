/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ducks2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:57:51 by joana             #+#    #+#             */
/*   Updated: 2024/03/11 19:39:41 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ducks_up(t_info *info, int x, int y)
{
	if (info->vars->map[y - 1][x] == 'C')
	{
		ducks_captured(info);
		info->collectibles--;
	}
	info->vars->map[y][x] = '0';
	info->vars->map[y - 1][x] = 'P';
}

void	ducks_down(t_info *info, int x, int y)
{
	if (info->vars->map[y + 1][x] == 'C')
	{
		ducks_captured(info);
		info->collectibles--;
	}
	info->vars->map[y][x] = '0';
	info->vars->map[y + 1][x] = 'P';
}

void	ducks_left(t_info *info, int x, int y)
{
	if (info->vars->map[y][x - 1] == 'C')
	{
		ducks_captured(info);
		info->collectibles--;
	}
	info->vars->map[y][x] = '0';
	info->vars->map[y][x - 1] = 'P';
}

void	ducks_right(t_info *info, int x, int y)
{
	if (info->vars->map[y][x + 1] == 'C')
	{
		ducks_captured(info);
		info->collectibles--;
	}
	info->vars->map[y][x] = '0';
	info->vars->map[y][x + 1] = 'P';
}
