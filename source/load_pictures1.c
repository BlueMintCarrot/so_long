/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pictures1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 00:34:15 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 14:07:37 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_picture_part1(t_vars *vars, char **map)
{
	load_picture1(vars, map);
	load_picture2(vars);
	load_picture3(vars);
	load_picture4(vars);
	load_picture5(vars);
	load_picture6(vars);
	load_picture7(vars);
	load_picture8(vars);
	load_picture9(vars);
	load_picture10(vars);
	load_picture11(vars);
	load_picture12(vars);
	load_picture13(vars);
	load_picture14(vars);
}

void	load_picture_part2(t_vars *vars, char **map)
{
	load_picture15(vars);
	load_picture16(vars);
	load_picture17(vars);
	load_picture18(vars);
	load_picture19(vars);
	load_picture20(vars);
	load_picture21(vars);
	load_picture22(vars);
	load_picture23(vars);
	load_picture24(vars);
	load_picture25(vars);
	load_picture26(vars);
	load_picture27(vars, map);
}

void	load_picture(t_vars *vars, char **map)
{
	load_picture_part1(vars, map);
	load_picture_part2(vars, map);
}
