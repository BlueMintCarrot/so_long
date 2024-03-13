/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures7.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 00:24:05 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 15:52:17 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_picture25(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bunny_right_bottom_half->img);
	free(vars->mapimgs->halves->bunny_right_bottom_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bunny_right_left_half->img);
	free(vars->mapimgs->halves->bunny_right_left_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bunny_right_right_half->img);
	free(vars->mapimgs->halves->bunny_right_right_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->bunny_right_upper_half->img);
	free(vars->mapimgs->halves->bunny_right_upper_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->center_flame_bottom_half->img);
	free(vars->mapimgs->halves->center_flame_bottom_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->center_flame_left_half->img);
	free(vars->mapimgs->halves->center_flame_left_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->center_flame_right_half->img);
	free(vars->mapimgs->halves->center_flame_right_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->center_flame_upper_half->img);
	free(vars->mapimgs->halves->center_flame_upper_half);
}

void	load_picture26(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->jumping_bunny_left_bottom_half->img);
	free(vars->mapimgs->halves->jumping_bunny_left_bottom_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->jumping_bunny_left_left_half->img);
	free(vars->mapimgs->halves->jumping_bunny_left_left_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->jumping_bunny_left_right_half->img);
	free(vars->mapimgs->halves->jumping_bunny_left_right_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->jumping_bunny_left_upper_half->img);
	free(vars->mapimgs->halves->jumping_bunny_left_upper_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->jumping_bunny_right_bottom_half->img);
	free(vars->mapimgs->halves->jumping_bunny_right_bottom_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->jumping_bunny_right_left_half->img);
	free(vars->mapimgs->halves->jumping_bunny_right_left_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->jumping_bunny_right_right_half->img);
	free(vars->mapimgs->halves->jumping_bunny_right_right_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->jumping_bunny_right_upper_half->img);
	free(vars->mapimgs->halves->jumping_bunny_right_upper_half);
}

void	load_picture27(t_vars *vars, char **map)
{
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->left_flame_bottom_half->img);
	free(vars->mapimgs->halves->left_flame_bottom_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->left_flame_left_half->img);
	free(vars->mapimgs->halves->left_flame_left_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->left_flame_right_half->img);
	free(vars->mapimgs->halves->left_flame_right_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->left_flame_upper_half->img);
	free(vars->mapimgs->halves->left_flame_upper_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->right_flame_bottom_half->img);
	free(vars->mapimgs->halves->right_flame_bottom_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->right_flame_left_half->img);
	free(vars->mapimgs->halves->right_flame_left_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->right_flame_right_half->img);
	free(vars->mapimgs->halves->right_flame_right_half);
	mlx_destroy_image(vars->mlx, \
	vars->mapimgs->halves->right_flame_upper_half->img);
	free(vars->mapimgs->halves->right_flame_upper_half);
	load_stuff(vars, map);
}

void	print_image(t_vars *vars, int x, int y)
{
	if (vars->map[y][x] == 'P')
		mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[6]->img, \
		x * 64, y * 64);
	if (vars->map[y][x] == '1')
		mlx_put_image_to_window(vars->mlx, vars->window, vars->wall_ptr, \
		x * 64, y * 64);
	if (vars->map[y][x] == '0')
		mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[1]->img, \
		x * 64, y * 64);
	if (vars->map[y][x] == 'C')
		mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[8]->img, \
		x * 64, y * 64);
	if (vars->map[y][x] == 'E')
		mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[12]->img, \
		x * 64, y * 64);
	if (vars->map[y][x] == 'X' || vars->map[y][x] == 'Y')
		mlx_put_image_to_window(vars->mlx, vars->window, vars->imgs[2]->img, \
		x * 64, y * 64);
}

void	load_stuff(t_vars *vars, char **map)
{
	int	x;
	int	y;

	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x] && map[y][x] != '\n')
		{
			print_image(vars, x, y);
			x++;
		}
		y++;
	}
}
