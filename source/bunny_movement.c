/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bunny_movement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:50:55 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 23:08:51 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	where_is_the_bunny_going(int k, t_info *info)
{
	if (k == 119 || k == 65362)
		move_up(info, k);
	if (k == 97 || k == 65361)
		move_left(info, k);
	if (k == 115 || k == 65364)
		move_down(info, k);
	if (k == 100 || k == 65363)
		move_right(info, k);
	if (k == 65307 || k == 17)
	{
		print_error_message(11);
		quit(info, k);
	}
	return (1);
}

void	where_is_the_bunny_now(t_info *info, int k)
{
	if (info->map[info->y][info->x] == 'E' && info->collectibles == 0)
	{
		print_error_message(9);
		quit(info, EXIT_FAILURE);
	}
	if (info->map[info->y][info->x] == 'X'
		|| info->map[info->y][info->x] == 'Y')
	{
		print_error_message(10);
		quit(info, EXIT_FAILURE);
	}
	if (k == 119 || k == 65362)
		ducks_up(info, info->x, info->y);
	else if (k == 97 || k == 65361)
		ducks_left(info, info->x, info->y);
	else if (k == 115 || k == 65364)
		ducks_down(info, info->x, info->y);
	else if (k == 100 || k == 65363)
		ducks_right(info, info->x, info->y);
}

int	where_is_the_bunny(t_info *info)
{
	info->y = -1;
	while (info->map[++info->y])
	{
		info->x = -1;
		while (info->map[info->y][++info->x]
			&& info->map[info->y][info->x] != '\n')
			if (info->map[info->y][info->x] == 'P')
				return (1);
	}
	return (0);
}

void	moves_on_screen(t_info *info)
{
	char	*move_count;
	char	*print_move_count;

	move_count = ft_itoa(info->moves);
	print_move_count = ft_strjoin("Moves->", move_count);
	mlx_put_image_to_window(info->vars->mlx, info->vars->window,
		info->images->wall->img, 64, info->h * 64 - 64);
	mlx_string_put(info->vars->mlx, info->vars->window, 40, info->h * 64 - 20,
		0xffffffff, print_move_count);
	mlx_string_put(info->vars->mlx, info->vars->window, 40, 33, 0xffffffff,
		"Collectibles->");
	if (move_count)
		free(move_count);
	free(print_move_count);
}
