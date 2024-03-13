/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:48:38 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 14:22:01 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	animate_exit(char **map, t_vars *vars, int anim, char c)
{
	int	x;
	int	y;
	int	m;
	int	n;

	y = 0;
	n = 0;
	while (map[y])
	{
		x = 0;
		m = 0;
		while (map[y][x] && map[y][x] != '\n')
		{
			if (map[y][x] == 'E' && anim == 5)
				animate_fire(vars, c, m, n);
			m += 64;
			x++;
		}
		n += 64;
		y++;
	}
}

void	animate_fire(t_vars *vars, char c, int m, int n)
{
	if (c == 'R')
		mlx_put_image_to_window(vars->mlx, vars->window, \
		vars->imgs[12]->img, m, n);
	else if (c == 'C')
		mlx_put_image_to_window(vars->mlx, vars->window, \
		vars->imgs[11]->img, m, n);
	else if (c == 'L')
		mlx_put_image_to_window(vars->mlx, vars->window, \
		vars->imgs[10]->img, m, n);
}

void	animate_collectible(char **map, t_vars *vars, int anim, char c)
{
	int	x;
	int	y;
	int	m;
	int	n;

	y = 0;
	n = 0;
	while (map[y])
	{
		x = 0;
		m = 0;
		while (map[y][x] && map[y][x] != '\n')
		{
			if (map[y][x] == 'C' && anim == 3 && c == 'R')
				mlx_put_image_to_window(vars->mlx, vars->window, \
				vars->imgs[8]->img, m, n);
			else if (map[y][x] == 'C' && anim == 3 && c == 'L')
				mlx_put_image_to_window(vars->mlx, vars->window, \
				vars->imgs[9]->img, m, n);
			m += 64;
			x++;
		}
		n += 64;
		y++;
	}
}

int	duck_animation(t_info *info)
{
	static int	i;

	if (i < 4500)
	{
		animate_collectible(info->vars->map, info->vars, 3, 'R');
		info->duck_direction = 6;
	}
	else if (i < 9000)
	{
		animate_collectible(info->vars->map, info->vars, 3, 'L');
		info->duck_direction = 4;
	}
	if (i == 9000)
		i = 0;
	i++;
	flame_animation(info);
	bat_animation(info);
	return (0);
}

int	flame_animation(t_info *info)
{
	static int	i;

	if (i < 6000)
	{
		info->exit_direction = 6;
		animate_exit(info->vars->map, info->vars, 5, 'R');
	}
	else if (i < 9000)
	{
		info->exit_direction = 5;
		animate_exit(info->vars->map, info->vars, 5, 'C');
	}
	else if (i < 12000)
	{
		info->exit_direction = 4;
		animate_exit(info->vars->map, info->vars, 5, 'L');
	}
	if (i == 12000)
		i = 0;
	i++;
	return (0);
}
