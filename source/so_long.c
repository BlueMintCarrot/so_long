/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:52 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 19:33:34 by joada-si         ###   ########.fr       */
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
	char	**map;
	char	*buf;
	char	*str;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	buf = malloc(sizeof(char) * 1 + 1);
	while (read(fd, buf, 1) > 0)
		if (buf[0] == '\n')
			n++;
	close(fd);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	map = malloc(sizeof(char *) * (n + 2));
	if (!map)
		return (NULL);
	n = 0;
	str = get_next_line(fd);
	while (str)
	{
		map[n++] = str;
		str = get_next_line(fd);
	}
	return (map[n] = NULL, close(fd), free(buf), map);
}

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

int	arg_checker(int argc)
{
	if (argc == 1)
		return (print_error_message2(13), 0);
	if (argc > 2)
		return (print_error_message2(14), 0);
	return (1);
}

int	info_init(t_info *info, char **argv, t_vars *vars)
{
	info->map = create_map(info, argv[1], 0);
	if (!info->map)
		return (free(info), 0);
	info->flood_fill_map = info->map;
	info->vars = vars;
	return (1);
}

int	main(int argc, char **argv)
{
	t_vars	vars;
	t_info	*info;

	if (!arg_checker(argc))
		return (0);
	if (!name_check(argv[1]))
		return (print_error_message(12), 0);
	info = malloc(sizeof(t_info));
	if (!info)
		return (0);
	if (!info_init(info, argv, &vars))
		return (0);
	if (!final_map_check(info))
		return (0);
	info->vars->mlx = mlx_init();
	info->vars->window = mlx_new_window(info->vars->mlx, info->w * 64,
		info-> h * 64, "Hell Yeah!");
	if (!load_pictures(info))
		return (0);
	how_many_bats(info);
	(moves_on_screen(info), mlx_loop_hook(info->vars->mlx, animations, info));
	mlx_hook(info->vars->window, KeyPress, KeyPressMask,
		where_is_the_bunny_going, info);
	(mlx_hook(info->vars->window, 17, 0, quit, info), mlx_loop(info->vars->mlx));
	return (0);
}
