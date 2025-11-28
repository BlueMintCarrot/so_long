/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:12 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 22:55:40 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_stuff(t_info *info)
{
	int	i;

	i = -1;
	if (info->halves)
		free(info->halves);
	if (info->images)
		free(info->images);
	free_dptr(info);
	while (++i < info->enemies)
	{
		if (info->bat[i])
			free(info->bat[i]);
	}
	i = -1;
	while (++i < 71)
	{
		if (info->imgs[i]->img)
			mlx_destroy_image(info->vars->mlx, info->imgs[i]->img);
	}
	i = -1;
	while (++i < 71)
	{
		if (info->imgs[i])
			free(info->imgs[i]);
	}
}

void	free_dptr(t_info *info)
{
	int	i;

	i = -1;
	if (!info)
		return ;
	if (info->map)
	{
		while (info->map[++i])
			if (info->map[i])
				free(info->map[i]);
	}
	if (info->map)
		free(info->map);
	i = -1;
	if (info->flood_fill_map)
	{
		while (info->flood_fill_map[++i])
			if (info->flood_fill_map[i])
				free(info->flood_fill_map[i]);
	}
	if (info->flood_fill_map)
		free(info->flood_fill_map);
}

int	quit(t_info *info, int key)
{
	if (info->images->floor->img)
		mlx_destroy_image(info->vars->mlx, info->images->floor->img);
	if (info->images->wall->img)
		mlx_destroy_image(info->vars->mlx, info->images->wall->img);
	if (info->images->floor)
		free(info->images->floor);
	if (info->images->wall)
		free(info->images->wall);
	//picture_cleaner(info);
	free_stuff(info);
	mlx_destroy_window(info->vars->mlx, info->vars->window);
	mlx_destroy_display(info->vars->mlx);
	free(info->vars->mlx);
	free(info);
	exit(key);
	return (0);
}
