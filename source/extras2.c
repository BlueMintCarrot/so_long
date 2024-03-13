/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:23:30 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 13:50:02 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	jump_bunny_left_left2(t_vars *vars, t_info *info, int r)
{
	while (r < 4500)
	{
		jump_x_minus_one(info);
		r++;
		if (r == 4500)
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[1]->img, (info->x * 64) - 32, (info->y * 64));
		while (r < 5250 && r >= 4500)
		{
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[4]->img, (info->x * 64) - 64, (info->y * 64));
			r++;
		}
	}
	return (1);
}

int	jump_bunny_right_right2(t_vars *vars, t_info *info, int r)
{
	while (r < 4500)
	{
		jump_x_plus_one(info);
		r++;
		if (r == 4500)
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[1]->img, (info->x * 64) + 32, (info->y * 64));
		while (r < 5250 && r >= 4500)
		{
			mlx_put_image_to_window(vars->mlx, vars->window, \
			vars->imgs[6]->img, (info->x * 64) + 64, (info->y * 64));
			r++;
		}
	}
	return (1);
}

int	name_check(char *name)
{
	int	n;

	n = ft_strlen(name);
	if (ft_strncmp(name + n - 4, ".ber", 4) == 0)
		return (1);
	return (0);
}

void	quit_bat(t_info *info)
{
	print_error_message(10);
	quit(info, EXIT_FAILURE);
}
