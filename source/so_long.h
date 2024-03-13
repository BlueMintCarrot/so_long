/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:50:48 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 16:41:28 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../Libft/libft.h"
# include "../mlx/mlx.h"
# include "../mlx/mlx_int.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_bat
{
	char		bat_type;
	int			bat_direction;
	int			x;
	int			y;
}				t_bat;

typedef struct s_imgs
{
	char		*addr;
	int			bites_per_pxl;
	int			endian;
	int			height;
	int			line_len;
	int			width;
	void		*win;
	void		*img;
}				t_imgs;

typedef struct s_halves
{
	t_imgs		*bat_bottom_half;
	t_imgs		*bat_left_half;
	t_imgs		*bat_right_half;
	t_imgs		*bat_upper_half;
	t_imgs		*bat_wings_up_bottom_half;
	t_imgs		*bat_wings_up_left_half;
	t_imgs		*bat_wings_up_right_half;
	t_imgs		*bat_wings_up_upper_half;
	t_imgs		*bottom_half_duck_facing_left;
	t_imgs		*bottom_half_duck_facing_right;
	t_imgs		*bunny_left_bottom_half;
	t_imgs		*bunny_left_left_half;
	t_imgs		*bunny_left_right_half;
	t_imgs		*bunny_left_upper_half;
	t_imgs		*bunny_right_bottom_half;
	t_imgs		*bunny_right_left_half;
	t_imgs		*bunny_right_right_half;
	t_imgs		*bunny_right_upper_half;
	t_imgs		*center_flame_bottom_half;
	t_imgs		*center_flame_left_half;
	t_imgs		*center_flame_right_half;
	t_imgs		*center_flame_upper_half;
	t_imgs		*duck_face_half_facing_left;
	t_imgs		*duck_face_half_facing_right;
	t_imgs		*duck_tail_half_facing_left;
	t_imgs		*duck_tail_half_facing_right;
	t_imgs		*jumping_bunny_left_bottom_half;
	t_imgs		*jumping_bunny_left_left_half;
	t_imgs		*jumping_bunny_left_right_half;
	t_imgs		*jumping_bunny_left_upper_half;
	t_imgs		*jumping_bunny_right_bottom_half;
	t_imgs		*jumping_bunny_right_left_half;
	t_imgs		*jumping_bunny_right_right_half;
	t_imgs		*jumping_bunny_right_upper_half;
	t_imgs		*left_flame_bottom_half;
	t_imgs		*left_flame_left_half;
	t_imgs		*left_flame_right_half;
	t_imgs		*left_flame_upper_half;
	t_imgs		*right_flame_bottom_half;
	t_imgs		*right_flame_left_half;
	t_imgs		*right_flame_right_half;
	t_imgs		*right_flame_upper_half;
	t_imgs		*upper_half_duck_facing_left;
	t_imgs		*upper_half_duck_facing_right;
}				t_halves;

typedef struct s_mapimgs
{
	t_halves	*halves;
	t_imgs		*bat;
	t_imgs		*bat_wings_up;
	t_imgs		*bunny_left;
	t_imgs		*bunny_right;
	t_imgs		*duck_left;
	t_imgs		*duck_right;
	t_imgs		*flame_center;
	t_imgs		*flame_left;
	t_imgs		*flame_right;
	t_imgs		*jumping_bunny_left;
	t_imgs		*jumping_bunny_right;
	t_imgs		*small_duck;
	t_imgs		*wall;
}				t_mapimgs;

typedef struct s_vars
{
	char		**map;
	t_mapimgs	*mapimgs;
	t_imgs		*imgs[73];
	void		*floor_ptr;
	void		*mlx;
	void		*wall_ptr;
	void		*window;
}				t_vars;

typedef struct s_info
{
	int			bunny_direction;
	int			collectibles;
	int			duck_direction;
	int			enemies;
	int			exit_direction;
	int			moves;
	int			h;
	int			w;
	int			x;
	int			y;
	t_bat		*bat[100000];
	t_vars		*vars;
}				t_info;

char			**create_map(char *file_name, int n);
char			**dup_map(char **map, int h);
int				big_function(char **map);
int				check_c(char **map);
int				check_e(char **map);
int				count_collectibles(char **map, int i);
int				count_exit(char **map, int i);
int				count_floor_tiles(char **map, int i);
int				count_player(char **map, int i);
int				duck_animation(t_info *info);
int				final_map_check(char **map, t_info *info);
int				flame_animation(t_info *info);
int				jump_bunny_left_left2(t_vars *vars, t_info *info, int r);
int				jump_bunny_right_right2(t_vars *vars, t_info *info, int r);
int				map_check(char **map, int f, int c, int p);
int				map_check2(char **map);
int				map_check3(char **map);
int				map_check_31(char **map, int i);
int				map_check4(char **map);
int				map_manager(char **map, t_info *info);
int				move_down(int k, t_info *info);
int				move_left(int k, t_info *info);
int				move_right(int k, t_info *info);
int				move_up(int k, t_info *info);
int				name_check(char *name);
int				quit(t_info *info, int key);
int				to_move_or_not_to_move(char **map, int x, int y);
int				where_is_the_bunny(t_info *info, char **map);
int				where_is_the_bunny_going(int k, t_info *info);
t_imgs			*new_file_img(char *path, void *mlx, void *window);
t_imgs			*new_img(int w, int h, t_vars *mlx, t_vars *window);
unsigned int	get_pixel_img(t_imgs *img, int x, int y);
void			animate_collectible(char **map, t_vars *vars, int anim, char c);
void			animate_exit(char **map, t_vars *vars, int anim, char c);
void			animate_fire(t_vars *vars, char c, int m, int n);
void			bat(t_info *info);
void			bat2(t_info *info);
void			bat_animation(t_info *info);
void			bat_animation_down(t_info *info, int bat_nr);
void			bat_animation_down_wings_up(t_info *info, int bat_nr);
void			bat_animation_left(t_info *info, int bat_nr);
void			bat_animation_left_wings_up(t_info *info, int bat_nr);
void			bat_animation_right(t_info *info, int bat_nr);
void			bat_animation_right_wings_up(t_info *info, int bat_nr);
void			bat_animation_up(t_info *info, int bat_nr);
void			bat_animation_up_wings_up(t_info *info, int bat_nr);
void			bat_list(t_info *info);
void			bat_movement(t_info *info, int x, int y, int bat_nr);
void			bat_right_and_left(t_info *info, int bat_nr);
void			bat_right_and_left2(t_info *info, int bat_nr);
void			bat_up_and_down(t_info *info, int bat_nr);
void			bat_up_and_down2(t_info *info, int bat_nr);
void			bumped_into_a_bat(t_info *info);
void			bumped_into_a_bat_again(t_info *info);
void			change_bat_direction(t_info *info, int bat_nr);
void			ducks_captured(t_info *info);
void			ducks_down(t_info *info, int x, int y);
void			ducks_left(t_info *info, int x, int y);
void			ducks_right(t_info *info, int x, int y);
void			ducks_up(t_info *info, int x, int y);
void			error_map_check(int first_check, int c, int p, int e);
void			exit_game(t_info *info, char *str);
void			find_player(char **map, int *x, int *y);
void			flood_fill(char **map, int x, int y);
void			free_stuff(t_info *info);
void			free_array(t_info *info);
void			free_array1(t_info *info);
void			free_array2(t_info *info);
void			free_array3(t_info *info);
void			fuck_the_duck(t_info *info);
void			fuck_the_duck_again(t_info *info);
void			fuck_the_duck_once_more(t_info *info);
void			how_many_bats(char **map, t_info *info);
void			how_many_ducks(char **map, t_info *info);
void			im_tired_of_fucking_the_duck(t_info *info);
void			jump_bunny_left_down(t_vars *vars, t_info *info);
void			jump_bunny_left_left(t_vars *vars, t_info *info);
void			jump_bunny_left_up(t_vars *vars, t_info *info);
void			jump_bunny_right_down(t_vars *vars, t_info *info);
void			jump_bunny_right_right(t_vars *vars, t_info *info);
void			jump_bunny_right_up(t_vars *vars, t_info *info);
void			jump_x_minus_one(t_info *info);
void			jump_x_plus_one(t_info *info);
void			jump_y_minus_one(t_info *info);
void			jump_y_plus_one(t_info *info);
void			killed_by_a_bat(t_info *info, int bat_nr);
void			killed_by_a_bat_again(t_info *info, int bat_nr);
void			leaving_hell(t_info *info);
void			leaving_hell_another_way(t_info *info);
void			leaving_hell_yet_another_way(t_info *info);
void			load_picture(t_vars *vars, char **map);
void			load_picture1(t_vars *vars, char **map);
void			load_picture2(t_vars *vars);
void			load_picture3(t_vars *vars);
void			load_picture4(t_vars *vars);
void			load_picture5(t_vars *vars);
void			load_picture6(t_vars *vars);
void			load_picture7(t_vars *vars);
void			load_picture8(t_vars *vars);
void			load_picture9(t_vars *vars);
void			load_picture10(t_vars *vars);
void			load_picture11(t_vars *vars);
void			load_picture12(t_vars *vars);
void			load_picture13(t_vars *vars);
void			load_picture14(t_vars *vars);
void			load_picture15(t_vars *vars);
void			load_picture16(t_vars *vars);
void			load_picture17(t_vars *vars);
void			load_picture18(t_vars *vars);
void			load_picture19(t_vars *vars);
void			load_picture20(t_vars *vars);
void			load_picture21(t_vars *vars);
void			load_picture22(t_vars *vars);
void			load_picture23(t_vars *vars);
void			load_picture24(t_vars *vars);
void			load_picture25(t_vars *vars);
void			load_picture26(t_vars *vars);
void			load_picture27(t_vars *vars, char **map);
void			load_picture_part1(t_vars *vars, char **map);
void			load_picture_part2(t_vars *vars, char **map);
void			load_stuff(t_vars *vars, char **map);
void			map_height(char **map, t_info *info);
void			map_width(char **map, t_info *info);
void			moves_on_screen(t_info *info);
void			new_bat(t_info *info, int x, int y, char c);
void			print_error_message(int i);
void			print_image(t_vars *vars, int x, int y);
void			put_img_to_img(t_imgs *dst, t_imgs *src, int x, int y);
void			put_pixel_img(t_imgs *img, int x, int y, int color);
void			quit_bat(t_info *info);
void			where_is_the_bunny_now(t_info *info, int k, int x, int y);
void			where_the_fuck_is_the_bunny(t_info *info);
void			why_am_i_leaving_hell(t_info *info);

#endif