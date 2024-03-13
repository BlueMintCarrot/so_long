/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:06:47 by joana             #+#    #+#             */
/*   Updated: 2024/03/07 19:47:41 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	find_player(char **map, int *x, int *y)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (map[i])
	{
		while (map[i][n] != '\0' && map[i][n] != '\n')
		{
			n++;
			if (map[i][n] == 'P')
			{
				*x = n;
				*y = i;
			}
		}
		n = 0;
		i++;
	}
}

void	flood_fill(char **map, int x, int y)
{
	int	w;
	int	h;

	w = 0;
	h = 0;
	while (map[h][w] != '\0' && map[h][w] != '\n')
		w++;
	while (map[h])
		h++;
	if (x < 0 || y < 0 || x >= w || y >= h)
		return ;
	if (map[y][x] == '1' || map[y][x] == 'W')
		return ;
	map[y][x] = 'W';
	flood_fill(map, (x + 1), y);
	flood_fill(map, (x - 1), y);
	flood_fill(map, x, (y + 1));
	flood_fill(map, x, (y - 1));
}

int	check_c(char **map)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (map[i])
	{
		while (map[i][n] != '\0' && map[i][n] != '\n')
		{
			n++;
			if (map[i][n] == 'C')
			{
				print_error_message(7);
				return (0);
			}
		}
		n = 0;
		i++;
	}
	return (1);
}

int	check_e(char **map)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (map[i])
	{
		while (map[i][n] != '\0' && map[i][n] != '\n')
		{
			n++;
			if (map[i][n] == 'E')
			{
				print_error_message(6);
				return (0);
			}
		}
		n = 0;
		i++;
	}
	return (1);
}

char	**dup_map(char **map, int h)
{
	char	**dup;

	while (map[h])
		h++;
	dup = malloc(sizeof(char *) * (h + 1));
	if (!dup)
		return (NULL);
	h = 0;
	while (map[h])
	{
		dup[h] = ft_strdup(map[h]);
		h++;
	}
	dup[h] = NULL;
	return (dup);
}
