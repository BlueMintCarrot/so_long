/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bunny_movement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:37:34 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 13:00:13 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	where_is_the_bunny_now(t_info *info, int k, int x, int y)
{
	if (info->vars->map[y][x] == 'E' && info->collectibles == 0)
	{
		print_error_message(9);
		quit(info, EXIT_FAILURE);
	}
	if (info->vars->map[y][x] == 'X' || info->vars->map[y][x] == 'Y')
	{
		print_error_message(10);
		quit(info, EXIT_FAILURE);
	}
	if (k == 119)
		ducks_up(info, x, y);
	else if (k == 97)
		ducks_left(info, x, y);
	else if (k == 115)
		ducks_down(info, x, y);
	else if (k == 100)
		ducks_right(info, x, y);
}

int	where_is_the_bunny_going(int k, t_info *info)
{
	if (k == 119)
		move_up(k, info);
	if (k == 97)
		move_left(k, info);
	if (k == 115)
		move_down(k, info);
	if (k == 100)
		move_right(k, info);
	if (k == 65307 || k == 17)
	{
		print_error_message(11);
		quit(info, k);
	}
	return (0);
}

int	where_is_the_bunny(t_info *info, char **map)
{
	info->x = 0;
	info->y = 0;
	while (map[info->y])
	{
		info->x = 0;
		while (map[info->y][info->x] && map[info->y][info->x] != '\n')
		{
			if (map[info->y][info->x] == 'P')
				return (1);
			info->x++;
		}
		info->y++;
	}
	return (0);
}

void	moves_on_screen(t_info *info)
{
	char	*move_count;
	char	*print_move_count;

	move_count = ft_itoa(info->moves);
	print_move_count = ft_strjoin("Moves->", move_count);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window, \
	info->vars->wall_ptr, 64, info->h * 64 - 64);
	mlx_string_put(info->vars->mlx, info->vars->window, 40, \
	info->h * 64 - 20, 0xffffffff, print_move_count);
	mlx_string_put(info->vars->mlx, info->vars->window, \
	40, 33, 0xffffffff, "Collectibles->");
	free(move_count);
	free(print_move_count);
}
