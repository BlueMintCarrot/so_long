/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:10:10 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 13:55:24 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#define M "Great job! You managed to collect all the ducks and escape safely!\n"

void	how_many_ducks(char **map, t_info *info)
{
	int	x;
	int	y;

	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x] && map[y][x] != '\n')
		{
			if (map[y][x] == 'C')
				info->collectibles++;
			x++;
		}
		y++;
	}
}

void	how_many_bats(char **map, t_info *info)
{
	int	x;
	int	y;

	info->enemies = 0;
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x] && map[y][x] != '\n')
		{
			if (map[y][x] == 'X' || map[y][x] == 'Y')
				new_bat(info, x, y, map[y][x]);
			x++;
		}
		y++;
	}
}

int	quit(t_info *info, int key)
{
	mlx_destroy_image(info->vars->mlx, info->vars->wall_ptr);
	mlx_destroy_image(info->vars->mlx, info->vars->floor_ptr);
	free_stuff(info);
	mlx_destroy_window(info->vars->mlx, info->vars->window);
	mlx_destroy_display(info->vars->mlx);
	free(info->vars->mlx);
	free(info);
	exit(key);
	return (0);
}

int	big_function(char **map)
{
	int		x;
	int		y;
	char	**dup;

	dup = dup_map(map, 0);
	find_player(dup, &x, &y);
	flood_fill(dup, x, y);
	y = 0;
	if (check_c(dup) == 0 || check_e(dup) == 0)
	{
		while (dup[y])
		{
			free(dup[y]);
			y++;
		}
		free(dup);
		return (0);
	}
	while (dup[y])
	{
		free(dup[y]);
		y++;
	}
	free(dup);
	return (1);
}

void	print_error_message(int i)
{
	if (i == 1)
		write(1, "There are no collectibles available!\n", 37);
	else if (i == 2)
		write(1, "There's no player available!\n", 29);
	else if (i == 3)
		write(1, "There's no exit available!\n", 27);
	else if (i == 4)
		write(1, "The map isn't a rectangle!\n", 27);
	else if (i == 5)
		write(1, "The map isn't surrounded by walls!\n", 35);
	else if (i == 6)
		write(1, "There's no way to get to the exit!\n", 35);
	else if (i == 7)
		write(1, "There's no way to get all collectibles!\n", 40);
	else if (i == 8)
		write(1, "There's strange characters on the map!\n", 39);
	else if (i == 9)
		write(1, M, 67);
	else if (i == 10)
		write(1, "You got caught by a bat!\n", 25);
	else if (i == 11)
		write(1, "Are you quitting already?\n", 26);
	else if (i == 12)
		write(1, "Invalid filename!\n", 16);
}
