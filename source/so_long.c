/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:50:37 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 14:29:15 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_manager(char **map, t_info *info)
{
	map_width(map, info);
	map_height(map, info);
	if (map_check(map, 0, 0, 0) == 0)
		return (0);
	if (map_check2(map) == 0)
		return (0);
	if (map_check3(map) == 0)
		return (0);
	if (map_check4(map) == 0)
		return (0);
	return (1);
}

char	**create_map(char *file_name, int n)
{
	char	**map;
	char	*buf;
	char	*str;
	int		fd;

	fd = open(file_name, O_RDONLY);
	buf = malloc(sizeof(char) * (1 + 1));
	n = 0;
	if (fd < 0)
		exit (0);
	while (read(fd, buf, 1) > 0)
		if (buf[0] == '\n')
			n++;
	close(fd);
	map = malloc(sizeof(char *) * (n + 2));
	n = 0;
	fd = open(file_name, O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		map[n++] = str;
		str = get_next_line(fd);
	}
	map[n] = NULL;
	return (close(fd), free(buf), map);
}

int	final_map_check(char **map, t_info *info)
{
	if (map_manager(map, info) == 0)
	{
		write(1, "The map is not valid!\n", 22);
		return (0);
	}
	how_many_ducks(map, info);
	info->bunny_direction = 6;
	info->moves = 0;
	return (1);
}

//int	main(int argc, char **argv)
//{
//	char	**map;
//	t_vars	vars;
//	t_info	*info;
//
//	if (argc != 2)
//		return (0);
//	map = NULL;
//	info = malloc(sizeof(t_info));
//	final_map_check(map, info, argv);
//	info->vars = &vars;
//	vars.mlx = mlx_init();
//	vars.window = mlx_new_window(vars.mlx, info->w * 64, info->h * 64,
//	"Hell Yeah");
//	load_picture(&vars, map);
//	how_many_bats(map, info);
//	moves_on_screen(info);
//	mlx_loop_hook(vars.mlx, duck_animation, info);
//	mlx_hook(vars.window, KeyPress, KeyPressMask,
//	where_is_the_bunny_going, info);
//	mlx_hook(vars.window, 17, 0, quit, info);
//	mlx_loop(vars.mlx);
//	free(info);
//	return (0);
//}

int	main(int argc, char **argv)
{
	char	**map;
	t_vars	vars;
	t_info	*info;

	if (argc != 2)
		return (0);
	info = malloc(sizeof(t_info));
	if (name_check(argv[1]) == 0)
		return (0);
	map = create_map(argv[1], 0);
	final_map_check(map, info);
	info->vars = &vars;
	vars.mlx = mlx_init();
	vars.window = mlx_new_window(vars.mlx, info->w * 64, info->h * 64, \
	"Hell Yeah");
	load_picture(&vars, map);
	how_many_bats(map, info);
	moves_on_screen(info);
	mlx_loop_hook(vars.mlx, duck_animation, info);
	mlx_hook(vars.window, KeyPress, KeyPressMask, \
	where_is_the_bunny_going, info);
	mlx_hook(vars.window, 17, 0, quit, info);
	mlx_loop(vars.mlx);
	free(info);
	return (0);
}
