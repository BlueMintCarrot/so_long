/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:50 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 21:44:48 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_up(t_info *info, int k)
{
	where_is_the_bunny(info);
	if (to_move_or_not_to_move(info, info->x, info->y - 1) == 1
		|| to_move_or_not_to_move(info, info->x, info->y - 1) == 3)
	{
		info->moves++;
		if (info->bunny_direction == 6)
			jump_bunny_right_up(info);
		else if (info->bunny_direction == 4)
			jump_bunny_left_up(info);
		if (to_move_or_not_to_move(info, info->x, info->y - 1) == 3)
		{
			print_error_message(9);
			quit(info, EXIT_SUCCESS);
		}
		else
			where_is_the_bunny_now(info, k);
	}
	return (1);
}

int	move_left(t_info *info, int k)
{
	if (info->bunny_direction == 6)
		info->bunny_direction = 4;
	where_is_the_bunny(info);
	if (to_move_or_not_to_move(info, info->x - 1, info->y) == 0)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[2]->img, info->x * 64, info->y * 64);
	else if (to_move_or_not_to_move(info, info->x - 1, info->y) == 1
		|| to_move_or_not_to_move(info, info->x - 1, info->y) == 3)
	{
		info->moves++;
		jump_bunny_left_left(info);
		if (to_move_or_not_to_move(info, info->x - 1, info->y) == 3)
		{
			print_error_message(9);
			quit(info, EXIT_SUCCESS);
		}
		else
			where_is_the_bunny_now(info, k);
	}
	return (1);
}

int	move_down(t_info *info, int k)
{
	where_is_the_bunny(info);
	if (to_move_or_not_to_move(info, info->x, info->y + 1) == 1
		|| to_move_or_not_to_move(info, info->x, info->y + 1) == 3)
	{
		info->moves++;
		if (info->bunny_direction == 6)
			jump_bunny_right_down(info);
		else if (info->bunny_direction == 4)
			jump_bunny_left_down(info);
		if (to_move_or_not_to_move(info, info->x, info->y + 1) == 3)
		{
			print_error_message(9);
			quit(info, EXIT_SUCCESS);
		}
		else
			where_is_the_bunny_now(info, k);
	}
	return (1);
}

int	move_right(t_info *info, int k)
{
	if (info->bunny_direction == 4)
		info->bunny_direction = 6;
	where_is_the_bunny(info);
	if (to_move_or_not_to_move(info, info->x + 1, info->y) == 0)
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[4]->img, info->x * 64, info->y * 64);
	else if (to_move_or_not_to_move(info, info->x + 1, info->y) == 1
		|| to_move_or_not_to_move(info, info->x + 1, info->y) == 3)
	{
		info->moves++;
		jump_bunny_right_right(info);
		if (to_move_or_not_to_move(info, info->x + 1, info->y) == 3)
		{
			print_error_message(9);
			quit(info, EXIT_SUCCESS);
		}
		else
			where_is_the_bunny_now(info, k);
	}
	return (1);
}

int	to_move_or_not_to_move(t_info *info, int x, int y)
{
	if (info->map[y][x] == 'E' && map_check(info) == 0)
		return (3);
	else if (info->map[y][x] == '1' || info->map[y][x] == 'E')
		return (0);
	return (1);
}
