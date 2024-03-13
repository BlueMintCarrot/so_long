/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:29:49 by joana             #+#    #+#             */
/*   Updated: 2024/03/08 10:32:29 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	bat(t_info *info)
{
	int	bat_nr;

	bat_nr = 0;
	while (bat_nr < info->enemies)
	{
		bat_right_and_left(info, bat_nr);
		bat_up_and_down(info, bat_nr);
		bat_nr++;
	}
}

void	bat2(t_info *info)
{
	int	bat_nr;

	bat_nr = 0;
	while (bat_nr < info->enemies)
	{
		bat_right_and_left2(info, bat_nr);
		bat_up_and_down2(info, bat_nr);
		bat_nr++;
	}
}
