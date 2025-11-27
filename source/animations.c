/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:50:34 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/26 22:53:05 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	duck_animation(t_info *info)
{
	static int	i;

	if (i < 4500)
	{
		animate_collectible(info, 'R');
		info->duck_direction = 6;
	}
	else if (i < 9000)
	{
		animate_collectible(info, 'L');
		info->duck_direction = 4;
	}
	if (i == 9000)
		i = 0;
	i++;
	flame_animation(info);
	bat_animation(info);
	return (0);
}

void	animate_collectible(t_info *info, char c)
{
	int	x;
	int	y;
	int	m;
	int	n;

	y = -1;
	n = 0;
	while (info->map[++y])
	{
		x = -1;
		m = 0;
		while (info->map[y][++x] && info->map[y][x] != '\n')
		{
			if (info->map[y][x] == 'C' && c == 'R')
				mlx_put_image_to_window(info->vars->mlx, info->vars->window,
					info->imgs[6]->img, m, n);
			else if (info->map[y][x] == 'C' && c == 'L')
				mlx_put_image_to_window(info->vars->mlx, info->vars->window,
					info->imgs[7]->img, m, n);
			m += 64;
		}
		n += 64;
	}
}

int	flame_animation(t_info *info)
{
	static int	i;

	if (i < 6000)
	{
		info->exit_direction = 6;
		animate_exit(info, 'R');
	}
	else if (i < 9000)
	{
		info->exit_direction = 5;
		animate_exit(info, 'C');
	}
	else if (i < 12000)
	{
		info->exit_direction = 4;
		animate_exit(info, 'L');
	}
	if (i == 12000)
		i = 0;
	i++;
	return (0);
}

void	animate_exit(t_info *info, char c)
{
	int	x;
	int	y;
	int	m;
	int	n;

	y = -1;
	n = 0;
	while (info->map[++y])
	{
		x = -1;
		m = 0;
		while (info->map[y][++x] && info->map[y][x] != '\n')
		{
			if (info->map[y][x] == 'E')
				animate_fire(info, c, m, n);
			m += 64;
		}
		n += 64;
	}
}

void	animate_fire(t_info *info, char c, int m, int n)
{
	if (c == 'R')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[10]->img, m, n);
	else if (c == 'C')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[9]->img, m, n);
	else if (c == 'L')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[8]->img, m, n);
}
