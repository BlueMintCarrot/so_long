/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:50:52 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 15:49:34 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	bat(t_info *info)
{
	int	bat_nr;

	bat_nr = -1;
	while (++bat_nr < info->enemies)
		(bat_right_and_left(info, bat_nr), bat_up_and_down(info, bat_nr));
}

void	bat2(t_info *info)
{
	int	bat_nr;

	bat_nr = -1;
	while (++bat_nr < info->enemies)
		(bat_right_and_left2(info, bat_nr), bat_up_and_down2(info, bat_nr));
}

void	quit_bat(t_info *info)
{
	print_error_message(10);
	quit(info, EXIT_FAILURE);
}
