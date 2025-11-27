/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bunny_movement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:50:55 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 16:59:15 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	where_is_the_bunny_going(t_info *info, int k)
{
	if (k == 119 || k == 65362)
		move_up(info, k);
	if (k == 97 || k == 65361)
		move_left(info, k);
	if (k == 115 || k == 65364)
		move_down(info, k);
	if (k == 100 || k == 65363)
		move_right(info, k);
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
		info->images->wall, 64, info->h * 64 - 64);
	//set_font_helper(info);
	mlx_string_put(info->vars->mlx, info->vars->window, 40, info->h * 64 - 20,
		0xffffffff, print_move_count);
	mlx_string_put(info->vars->mlx, info->vars->window, 40, 33, 0xffffffff,
		"Collectibles->");
	if (move_count)
		free(move_count);
	if (print_move_count)
		free(print_move_count);
}

/* void	set_font_helper(t_info *info);
{
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-jis-fixed-medium-r-normal--16-110-100-100-c-160-jisx0208.1983-0");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-jis-fixed-medium-r-normal--16-150-75-75-c-160-jisx0208.1983-0");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-jis-fixed-medium-r-normal--24-170-100-100-c-240-jisx0208.1983-0");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-jis-fixed-medium-r-normal--24-230-75-75-c-240-jisx0208.1983-0");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-bold-r-normal--0-0-75-75-c-0-iso10646-1");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-bold-r-normal--0-0-75-75-c-0-iso8859-10");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-bold-r-normal--0-0-75-75-c-0-iso8859-13");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-bold-r-normal--13-100-100-100-c-80-iso8859-1");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-bold-r-normal--13-120-75-75-c-80-iso10646-1");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-bold-r-normal--13-120-75-75-c-80-iso8859-10");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-bold-r-normal--14-130-75-75-c-70-iso8859-1");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-bold-r-normal--15-120-100-100-c-90-iso8859-1");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-bold-r-normal--18-120-100-100-c-90-iso10646-1");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-medium-o-normal--0-0-75-75-c-0-iso10646-1");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-medium-o-semicondensed--0-0-75-75-c-0-iso10646-1");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-medium-r-normal--15-140-75-75-c-90-iso10646-1");
	mlx_set_font(info->vars->mlx, info->vars->window, 
	"-misc-fixed-medium-r-normal--0-0-100-100-c-0-iso10646-1");
}*/