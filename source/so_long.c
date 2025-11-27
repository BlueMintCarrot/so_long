/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:52 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 16:52:40 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_manager(t_info *info)
{
	map_dimensions(info);
	if (!map_check(info) || !map_check2(info)
		|| !map_check3(info) || !map_check4(info))
		return (0);
	return (1);
}

char	**create_map(t_info *info, char *filename, int n)
{
	char	buf[2];
	char	*str;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (read(fd, buf, 1) > 0)
		if (buf[0] == '\n')
			n++;
	close(fd);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	info->map = malloc(sizeof(char *) * (n + 2));
	if (!info->map)
		return (free(info), NULL);
	n = 0;
	str = get_next_line(fd);
	while (str)
	{
		info->map[n++] = str;
		str = get_next_line(fd);
	}
	return (info->map[n] = NULL, close(fd), info->map);
}

int	final_map_check(t_info *info)
{
	if (!map_manager(info))
		return (0);
	if (flood_fill_helper(info))
		return (free_dptr(info), free(info), 0);
	how_many_ducks(info);
	info->bunny_direction = 6;
	info->moves = 0;
	return (1);
}

int	arg_checker(int argc)
{
	if (argc == 1)
		return (print_error_message2(13), 0);
	if (argc > 2)
		return (print_error_message2(14), 0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_vars	*vars;
	t_info	*info;

	if (!arg_checker(argc))
		return (0);
	if (!name_check(argv[1]))
		return (print_error_message(12), 0);
	info = malloc(sizeof(t_info));
	if (!info)
		return (0);
	info->vars = vars;
	info->flood_fill_map = info->map;
	if (!final_map_check(info))
		return (0);
	vars->mlx = mlx_init();
	vars->window = mlx_new_window(vars->mlx, info->w * 64,
			info-> h * 64, "Hell Yeah!");
	if (!load_pictures(info))
		return (0);
	how_many_bats(info);
	(moves_on_screen(info), mlx_loop_hook(vars->mlx, animations, info));
	mlx_hook(vars->window, KeyPress, KeyPressMask,
		where_is_the_bunny_going, info);
	(mlx_hook(vars->window, 17, 0, quit, info), mlx_loop(vars->mlx));
	return (0);
}
