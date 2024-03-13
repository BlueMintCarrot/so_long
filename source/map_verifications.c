/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_verifications.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:00:47 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 17:04:05 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// check if the map is a rectangle/closed

int	map_check2(char **map)
{
	int	size;
	int	i;

	size = (int)ft_strlen(map[0]);
	i = 1;
	while (map[i + 1] != NULL)
	{
		if (size != (int)ft_strlen(map[i]))
		{
			print_error_message(4);
			return (0);
		}
		i++;
	}
	if (size != (int)ft_strlen(map[i]) + 1)
	{
		print_error_message(4);
		return (0);
	}
	return (1);
}

//check if it is surrounded by walls
//i - first index of the map
//j - index of the last wall
//m - index of the last line
//n - second index of the map

int	map_check3(char **map)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (map[0][n] != '\n')
	{
		if (map[0][n++] != '1')
		{
			print_error_message(5);
			return (0);
		}
	}
	j = n - 1;
	while (map[i + 1] != NULL)
	{
		if (map[i][0] != '1' || map[i++][j] != '1')
		{
			print_error_message(5);
			return (0);
		}
	}
	map_check_31(map, i);
	return (1);
}

void	map_width(char **map, t_info *info)
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (map[++i])
	{
		while (map[i][n] && map[i][n] != '\n')
			n++;
	}
	info->w = n;
}

void	map_height(char **map, t_info *info)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	info->h = i;
}

// checks content for something other than 'P', 'E', 'C'. '1', '0', 'X', 'Y'

int	map_check4(char **map)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (map[i])
	{
		while (map[i][n] != '\0' && map[i][n] != '\n' && (map[i][n] == 'P' || \
		map[i][n] == 'E' || map[i][n] == 'C' || map[i][n] == '1' || \
		map[i][n] == '0' || map[i][n] == 'X' || map[i][n] == 'Y'))
		{
			n++;
			if (map[i][n] != '\n' && map[i][n] != '\0' && (map[i][n] != 'P' \
			&& map[i][n] != 'E' && map[i][n] != 'C' && map[i][n] != '1' && \
			map[i][n] != '0' && map[i][n] != 'X' && map[i][n] != 'Y'))
				print_error_message(8);
		}
		n = 0;
		i++;
	}
	return (1);
}
