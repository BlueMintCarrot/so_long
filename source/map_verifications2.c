/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_verifications2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:24:22 by joana             #+#    #+#             */
/*   Updated: 2024/03/12 17:40:43 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//checks number of players, collectibles, exits and if there is floor

int	map_check(char **map, int f, int c, int p)
{
	int			i;
	int			e;
	static int	first_check;

	i = -1;
	e = 0;
	while (map[++i])
	{
		p += count_player(map, i);
		e += count_exit(map, i);
		c += count_collectibles(map, i);
		f += count_floor_tiles(map, i);
	}
	if (first_check == 0 && c > 0)
		first_check = 1;
	if (e == 1 && p == 1 && c >= 1 && f >= 1)
		return (1);
	error_map_check(first_check, c, p, e);
	return (0);
}

int	count_exit(char **map, int i)
{
	int	e;
	int	n;

	e = 0;
	n = 0;
	while (map[i][n] && map[i][n] != '\n')
		if (map[i][n++] == 'E')
			e++;
	return (e);
}

int	count_floor_tiles(char **map, int i)
{
	int	f;
	int	n;

	f = 0;
	n = 0;
	while (map[i][n] && map[i][n] != '\n')
		if (map[i][n++] == '0')
			f++;
	return (f);
}

int	count_player(char **map, int i)
{
	int	p;
	int	n;

	p = 0;
	n = 0;
	while (map[i][n] && map[i][n] != '\n')
		if (map[i][n++] == 'P')
			p++;
	return (p);
}

int	count_collectibles(char **map, int i)
{
	int	c;
	int	n;

	c = 0;
	n = 0;
	while (map[i][n] && map[i][n] != '\n')
		if (map[i][n++] == 'C')
			c++;
	return (c);
}
