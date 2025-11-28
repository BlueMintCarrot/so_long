/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures6.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:38 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 23:08:40 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_pictures21(t_info *info)
{
	info->imgs[66] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[66], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[66],
		info->halves->bunny_right_right_half, 0, 0);
	put_img_to_img(info->imgs[66], info->images->bat_wings_up, 0, 0);
	info->imgs[67] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[67], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[67],
		info->halves->bunny_left_right_half, 0, 0);
	put_img_to_img(info->imgs[67], info->images->bat, 0, 0);
	info->imgs[68] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[68], info->images->floor, 0, 0);
	put_img_to_img(info->imgs[68],
		info->halves->bunny_left_right_half, 0, 0);
	put_img_to_img(info->imgs[68], info->images->bat_wings_up, 0, 0);
	info->imgs[69] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[69], info->images->wall, 0, 0);
	put_img_to_img(info->imgs[69], info->images->small_duck, 0, 16);
	info->imgs[70] = new_img(64, 64, info->vars->mlx, info->vars->window);
	put_img_to_img(info->imgs[70], info->imgs[69], 0, 0);
	put_img_to_img(info->imgs[70], info->images->small_duck, 32, 16);
}

void	print_image(t_info *info, int x, int y)
{
	if (info->map[y][x] == 'P')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[4]->img, x * 64, y * 64);
	if (info->map[y][x] == '1')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->images->wall->img, x * 64, y * 64);
	if (info->map[y][x] == '0')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->images->floor->img, x * 64, y * 64);
	if (info->map[y][x] == 'C')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[6]->img, x * 64, y * 64);
	if (info->map[y][x] == 'E')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[10]->img, x * 64, y * 64);
	if (info->map[y][x] == 'X' || info->map[y][x] == 'Y')
		mlx_put_image_to_window(info->vars->mlx, info->vars->window,
			info->imgs[0]->img, x * 64, y * 64);
}

void	load_stuff(t_info *info)
{
	int	x;
	int	y;

	y = -1;
	while (info->map[++y])
	{
		x = -1;
		while (info->map[y][++x] && info->map[y][x] != '\n')
			print_image(info, x, y);
	}
}
