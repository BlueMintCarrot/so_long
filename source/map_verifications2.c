/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_verifications2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:48 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 23:00:21 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_check(t_info *info)
{
	int			i;
	int			array[3];
	static int	fc;

	i = -1;
	array[0] = 0;
	array[1] = 0;
	array[2] = 0;
	while (info->map[++i])
	{
		array[0] += count_player(info, i);
		array[1] += count_exit(info, i);
		array[2] += count_collectibles(info, i);
	}
	if (fc == 0 && array[2] > 0)
		fc = 1;
	if (array[1] == 1 && array[0] == 1 && array[2] >= 1)
		return (1);
	error_map_check(fc, array, info);
	return (0);
}

int	count_exit(t_info *info, int i)
{
	int	e;
	int	n;

	e = 0;
	n = -1;
	while (info->map[i][++n] && info->map[i][n] != '\n')
		if (info->map[i][n] == 'E')
			e++;
	return (e);
}

int	count_player(t_info *info, int i)
{
	int	p;
	int	n;

	p = 0;
	n = -1;
	while (info->map[i][++n] && info->map[i][n] != '\n')
		if (info->map[i][n] == 'P')
			p++;
	return (p);
}

int	count_collectibles(t_info *info, int i)
{
	int	c;
	int	n;

	c = 0;
	n = -1;
	while (info->map[i][++n] && info->map[i][n] != '\n')
		if (info->map[i][n] == 'C')
			c++;
	return (c);
}

int	name_check(char *name)
{
	int	n;

	n = ft_strlen(name);
	if (ft_strncmp(name + n - 4, ".ber", 4) == 0)
		return (1);
	return (0);
}
