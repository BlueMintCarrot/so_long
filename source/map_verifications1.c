/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_verifications1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:46 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 17:28:56 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_dimensions(t_info *info)
{
	int	i;
	int	n;

	i = -1;
	while (info->map[++i])
	{
		n = 0;
		while (info->map[i][n] && info->map[i][n] != '\n')
			n++;
	}
	info->w = n;
	info->h = i;
}

int	map_check2(t_info *info)
{
	size_t	size;
	int		i;

	size = ft_strlen(info->map[0]);
	i = 0;
	while (info->map[++i])
	{
		if (size != ft_strlen(info->map[i]))
			return (print_error_message(4), free_dptr(info), free(info), 0);
	}
	return (1);
}

//check if it is surrounded by walls
//i - first index of the map
//j - index of the last wall
//m - index of the last line
//n - second index of the map

int	map_check3(t_info *info)
{
	int	i;
	int	j;
	int	n;

	i = -1;
	n = -1;
	while (info->map[0][++n] != '\n')
		if (info->map[0][n] != '1')
			return (print_error_message(5), 0);
	j = n - 1;
	while (info->map[++i])
		if (info->map[i][0] != '1' || info->map[i][j] != '1')
			return (print_error_message(5), free_dptr(info), free(info), 0);
	i -= 1;
	n = -1;
	while (info->map[i][++n])
		if (info->map[i][n] != '1' && info->map[i][n] != '\n')
			return (print_error_message(5), 0);
	return (1);
}

int	map_check4(t_info *info)
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (info->map[++i])
	{
		while (info->map[i][n] && info->map[i][n] != '\n'
			&& (info->map[i][n] == 'P' || info->map[i][n] == 'E'
				|| info->map[i][n] == 'C' || info->map[i][n] == '1'
				|| info->map[i][n] == '0' || info->map[i][n] == 'X'
				|| info->map[i][n] == 'Y'))
		{
			n++;
			if (info->map[i][n] && info->map[i][n] != '\n'
				&& info->map[i][n] != 'P' && info->map[i][n] != 'E'
				&& info->map[i][n] != 'C' && info->map[i][n] != '1'
				&& info->map[i][n] != '0' && info->map[i][n] != 'X'
				&& info->map[i][n] != 'Y')
				return (print_error_message(8), free_dptr(info), free(info), 0);
		}
		n = 0;
	}
	return (1);
}

int	error_map_check(int *array, t_info *info)
{
	if (info->map[0] == NULL)
		return (free_dptr(info), free(info), 0);
	else if (array[2] == 0)
		return (free_dptr(info), free(info), print_error_message(1), 0);
	else if (array[0] != 1)
		return (free_dptr(info), free(info), print_error_message(2), 0);
	else if (array[1] != 1)
		return (free_dptr(info), free(info), print_error_message(3), 0);
	return (1);
}
