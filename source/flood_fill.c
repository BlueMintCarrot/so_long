/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:10 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 15:26:01 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	flood_fill_helper(t_info *info)
{
	int	x;
	int	y;

	find_player(info, &x, &y);
	flood_fill(info, x, y);
	if (!check_c_or_e(info))
		return (0);
	return (1);
}

void	find_player(t_info *info, int *x, int *y)
{
	int	i;
	int	n;

	i = -1;
	n = -1;
	while (info->map[++i])
	{
		while (info->map[i][++n] && info->map[i][n] != '\n')
		{
			if (info->map[i][n] == 'P')
			{
				*x = n;
				*y = i;
			}
		}
		n = 0;
	}
}

void	flood_fill(t_info *info, int x, int y)
{
	int	w;
	int	h;

	w = 0;
	h = 0;
	while (info->map[h][w] && info->map[h][w] != '\n')
		w++;
	while (info->map[h])
		h++;
	if (x < 0 || y < 0 || x >= w || y >= h)
		return ;
	info->flood_fill_map[y][x] = 'W';
	if (info->flood_fill_map[y][x] == '1'
		|| info->flood_fill_map[y][x] == 'W'
		|| info->flood_fill_map[y][x] == 'X'
		|| info->flood_fill_map[y][x] == 'Y')
		return ;
	(flood_fill(info, (x + 1), y), flood_fill(info, (x - 1), y));
	(flood_fill(info, x, (y + 1)), flood_fill(info, x, (y - 1)));
}

int	check_c_or_e(t_info *info)
{
	int	i;
	int	n;

	i = -1;
	n = -1;
	while (info->flood_fill_map[++i])
	{
		while (info->flood_fill_map[i][++n]
			&& info->flood_fill_map[i][n] != '\n')
		{
			if (info->flood_fill_map[i][n] == 'C'
				|| info->flood_fill_map[i][n] == 'E')
			{
				if (info->flood_fill_map[i][n] == 'C')
					return (print_error_message(7), 0);
				else
					return (print_error_message(6), 0);
			}
		}
		n = -1;
	}
	return (1);
}
