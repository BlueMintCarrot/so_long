/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_verifications3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 23:04:36 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/28 23:05:29 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	final_map_check(t_info *info)
{
	if (!map_manager(info))
		return (0);
	if (!flood_fill_helper(info))
		return (free_dptr(info), free(info), 0);
	how_many_ducks(info);
	info->bunny_direction = 6;
	info->moves = 0;
	return (1);
}

int	map_manager(t_info *info)
{
	map_dimensions(info);
	if (!map_check(info) || !map_check2(info)
		|| !map_check3(info) || !map_check4(info))
		return (0);
	return (1);
}
