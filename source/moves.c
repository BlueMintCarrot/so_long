/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:37:32 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 15:49:41 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_up(int k, t_info *info)
{
	where_is_the_bunny(info, info->vars->map);
	if (to_move_or_not_to_move(info->vars->map, info->x, info->y - 1) == 1)
	{
		info->moves++;
		if (info->bunny_direction == 6)
			jump_bunny_right_up(info->vars, info);
		else if (info->bunny_direction == 4)
			jump_bunny_left_up(info->vars, info);
		where_is_the_bunny_now(info, k, info->x, info->y);
	}
	else if (to_move_or_not_to_move(info->vars->map, info->x, info->y - 1) == 3)
	{
		info->moves++;
		if (info->bunny_direction == 6)
			jump_bunny_right_up(info->vars, info);
		else if (info->bunny_direction == 4)
			jump_bunny_left_up(info->vars, info);
		print_error_message(9);
		quit(info, EXIT_SUCCESS);
	}
	return (1);
}

int	move_left(int k, t_info *info)
{
	if (info->bunny_direction == 6)
		info->bunny_direction = 4;
	where_is_the_bunny(info, info->vars->map);
	if (to_move_or_not_to_move(info->vars->map, info->x - 1, info->y) == 0)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[4]->img, (info->x * 64), (info->y * 64));
	else if (to_move_or_not_to_move(info->vars->map, info->x - 1, info->y) == 1)
	{
		info->moves++;
		jump_bunny_left_left(info->vars, info);
		where_is_the_bunny_now(info, k, info->x, info->y);
	}
	else if (to_move_or_not_to_move(info->vars->map, \
	info->x - 1, info->y) == 3)
	{
		info->moves++;
		jump_bunny_left_left(info->vars, info);
		print_error_message(9);
		quit(info, EXIT_SUCCESS);
	}
	return (1);
}

int	move_down(int k, t_info *info)
{
	where_is_the_bunny(info, info->vars->map);
	if (to_move_or_not_to_move(info->vars->map, info->x, info->y + 1) == 1)
	{
		info->moves++;
		if (info->bunny_direction == 6)
			jump_bunny_right_down(info->vars, info);
		else if (info->bunny_direction == 4)
			jump_bunny_left_down(info->vars, info);
		where_is_the_bunny_now(info, k, info->x, info->y);
	}
	else if (to_move_or_not_to_move(info->vars->map, info->x, info->y + 1) == 3)
	{
		info->moves++;
		if (info->bunny_direction == 6)
			jump_bunny_right_down(info->vars, info);
		else if (info->bunny_direction == 4)
			jump_bunny_left_down(info->vars, info);
		print_error_message(9);
		quit(info, EXIT_SUCCESS);
	}
	return (1);
}

int	move_right(int k, t_info *info)
{
	if (info->bunny_direction == 4)
		info->bunny_direction = 6;
	where_is_the_bunny(info, info->vars->map);
	if (to_move_or_not_to_move(info->vars->map, info->x + 1, info->y) == 0)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
		info->vars->imgs[6]->img, (info->x * 64), (info->y * 64));
	else if (to_move_or_not_to_move(info->vars->map, info->x + 1, info->y) == 1)
	{
		info->moves++;
		jump_bunny_right_right(info->vars, info);
		where_is_the_bunny_now(info, k, info->x, info->y);
	}
	else if (to_move_or_not_to_move(info->vars->map, info->x + 1, info->y) == 3)
	{
		info->moves++;
		jump_bunny_right_right(info->vars, info);
		print_error_message(9);
		quit(info, EXIT_SUCCESS);
	}
	return (1);
}

int	to_move_or_not_to_move(char **map, int x, int y)
{
	if (map[y][x] == 'E' && map_check(map, 0, 0, 0) == 0)
		return (3);
	if (map[y][x] == '1' || map[y][x] == 'E')
		return (0);
	return (1);
}
