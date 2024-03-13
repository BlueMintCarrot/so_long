/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:30:48 by joana             #+#    #+#             */
/*   Updated: 2024/03/07 14:24:59 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_stuff(t_info *info)
{
	int	i;

	i = 0;
	mlx_destroy_image(info->vars->mlx, info->vars->mapimgs->small_duck->img);
	free(info->vars->mapimgs->small_duck);
	free(info->vars->mapimgs->halves);
	free(info->vars->mapimgs);
	while (info->vars->map[i])
	{
		free(info->vars->map[i]);
		i++;
	}
	free(info->vars->map);
	i = 0;
	while (i < info->enemies)
	{
		free(info->bat[i]);
		i++;
	}
	free_array(info);
	i = 0;
	while (i < 73)
		free(info->vars->imgs[i++]);
}

void	free_array(t_info *info)
{
	free_array1(info);
	free_array2(info);
	free_array3(info);
}

void	free_array1(t_info *info)
{
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[0]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[1]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[2]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[3]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[4]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[5]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[6]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[7]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[8]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[9]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[10]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[11]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[12]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[13]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[14]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[15]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[16]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[17]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[18]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[19]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[20]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[21]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[22]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[23]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[24]->img);
}

void	free_array2(t_info *info)
{
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[25]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[26]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[27]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[28]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[29]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[30]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[31]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[32]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[33]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[34]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[35]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[36]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[37]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[38]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[39]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[40]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[41]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[42]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[43]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[44]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[45]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[46]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[47]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[48]->img);
}

void	free_array3(t_info *info)
{
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[49]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[50]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[51]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[52]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[53]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[54]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[55]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[56]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[57]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[58]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[59]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[60]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[61]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[62]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[63]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[64]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[65]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[66]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[67]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[68]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[69]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[70]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[71]->img);
	mlx_destroy_image(info->vars->mlx, info->vars->imgs[72]->img);
}
