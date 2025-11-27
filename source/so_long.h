/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:54 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 16:58:56 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../mlx/mlx.h"
# include "../mlx/mlx_int.h"
# include "prinf.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_bat
{
	char	bat_type;
	int		bat_direction;
	int		x;
	int		y;
}				t_bat;

typedef struct s_imginfo
{
	char	*addr;
	int		bites_per_pxl;
	int		endian;
	int		height;
	int		line_len;
	int		width;
	void	*win;
	void	*img;
}				t_imginfo;

typedef struct s_halves
{
	t_imginfo		*bat_bottom_half;
	t_imginfo		*bat_left_half;
	t_imginfo		*bat_right_half;
	t_imginfo		*bat_upper_half;
	t_imginfo		*bat_wings_up_bottom_half;
	t_imginfo		*bat_wings_up_left_half;
	t_imginfo		*bat_wings_up_right_half;
	t_imginfo		*bat_wings_up_upper_half;
	t_imginfo		*bottom_half_duck_facing_left;
	t_imginfo		*bottom_half_duck_facing_right;
	t_imginfo		*bunny_left_bottom_half;
	t_imginfo		*bunny_left_left_half;
	t_imginfo		*bunny_left_right_half;
	t_imginfo		*bunny_left_upper_half;
	t_imginfo		*bunny_right_bottom_half;
	t_imginfo		*bunny_right_left_half;
	t_imginfo		*bunny_right_right_half;
	t_imginfo		*bunny_right_upper_half;
	t_imginfo		*center_flame_bottom_half;
	t_imginfo		*center_flame_left_half;
	t_imginfo		*center_flame_right_half;
	t_imginfo		*center_flame_upper_half;
	t_imginfo		*duck_face_half_facing_left;
	t_imginfo		*duck_face_half_facing_right;
	t_imginfo		*duck_tail_half_facing_left;
	t_imginfo		*duck_tail_half_facing_right;
	t_imginfo		*jumping_bunny_left_bottom_half;
	t_imginfo		*jumping_bunny_left_left_half;
	t_imginfo		*jumping_bunny_left_right_half;
	t_imginfo		*jumping_bunny_left_upper_half;
	t_imginfo		*jumping_bunny_right_bottom_half;
	t_imginfo		*jumping_bunny_right_left_half;
	t_imginfo		*jumping_bunny_right_right_half;
	t_imginfo		*jumping_bunny_right_upper_half;
	t_imginfo		*left_flame_bottom_half;
	t_imginfo		*left_flame_left_half;
	t_imginfo		*left_flame_right_half;
	t_imginfo		*left_flame_upper_half;
	t_imginfo		*right_flame_bottom_half;
	t_imginfo		*right_flame_left_half;
	t_imginfo		*right_flame_right_half;
	t_imginfo		*right_flame_upper_half;
	t_imginfo		*upper_half_duck_facing_left;
	t_imginfo		*upper_half_duck_facing_right;
}					t_halves;

typedef struct s_images
{
	t_imginfo		*bat;
	t_imginfo		*bat_wings_up;
	t_imginfo		*bunny_left;
	t_imginfo		*bunny_right;
	t_imginfo		*duck_left;
	t_imginfo		*duck_right;
	t_imginfo		*flame_center;
	t_imginfo		*flame_left;
	t_imginfo		*flame_right;
	t_imginfo		*floor;
	t_imginfo		*jumping_bunny_left;
	t_imginfo		*jumping_bunny_right;
	t_imginfo		*small_duck;
	t_imginfo		*wall;
}				t_images;

typedef struct s_vars
{
	void		*mlx;
	void		*window;
}				t_vars;

typedef struct s_info
{
	char		**map;
	char		**flood_fill_map;
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
	t_images	*images;
	t_halves	*halves;
	t_imginfo	*imgs[71];
	t_vars		*vars;
}				t_info;

char			*ft_itoa(int nb);
char			*ft_strjoin(const char *s1, const char *s2);
char			*get_next_line(int fd);
char			**create_map(t_info *info, char *filename, int n);
int				animations(t_info *info);
int				arg_checker(int argc);
int				check_c_or_e(t_info *info);
int				count_collectibles(t_info *info, int i);
int				count_exit(t_info *info, int i);
int				count_player(t_info *info, int i);
int				duck_animation(t_info *info);
int				error_map_check(int *array, t_info *info);
int				final_image_checker(t_info *info);
int				final_map_check(t_info *info);
int				flame_animation(t_info *info);
int				flood_fill_helper(t_info *info);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				halves_check(t_info *info);
int				halves_check2(t_info *info);
int				image_check(t_info *info);
int				load_pictures(t_info *info);
int				load_pictures1(t_info *info);
int				load_pictures2(t_info *info);
int				load_pictures8(t_info *info);
int				map_check(t_info *info);
int				map_check2(t_info *info);
int				map_check3(t_info *info);
int				map_check4(t_info *info);
int				map_manager(t_info *info);
int				move_down(t_info *info, int k);
int				move_left(t_info *info, int k);
int				move_right(t_info *info, int k);
int				move_up(t_info *info, int k);
int				name_check(char *name);
int				new_bat(t_info *info, int x, int y, char c);
int				quit(t_info *info, int key);
int				to_move_or_not_to_move(t_info *info, int x, int y);
int				where_is_the_bunny(t_info *info);
int				where_is_the_bunny_going(t_info *info, int k);
size_t			ft_strlen(const char *s);
t_imginfo		*new_file_img(char *path, void *mlx, void *window);
t_imginfo		*new_img(int w, int h, t_vars *mlx, t_vars *window);
unsigned int	get_pixel_img(t_imginfo *img, int x, int y);
void			animate_collectible(t_info *info, char c);
void			animate_exit(t_info *info, char c);
void			animate_fire(t_info *info, char c, int m, int n);
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
void			destroy_pictures1(t_info *info);
void			destroy_pictures2(t_info *info);
void			destroy_pictures3(t_info *info);
void			destroy_pictures4(t_info *info);
void			destroy_pictures5(t_info *info);
void			destroy_pictures6(t_info *info);
void			destroy_pictures7(t_info *info);
void			ducks_captured(t_info *info);
void			ducks_down(t_info *info, int x, int y);
void			ducks_left(t_info *info, int x, int y);
void			ducks_right(t_info *info, int x, int y);
void			ducks_up(t_info *info, int x, int y);
void			find_player(t_info *info, int *x, int *y);
void			flood_fill(t_info *info, int x, int y);
void			free_dptr(t_info *info);
void			free_pictures1(t_info *info);
void			free_pictures2(t_info *info);
void			free_pictures3(t_info *info);
void			free_pictures4(t_info *info);
void			free_pictures5(t_info *info);
void			free_stuff(t_info *info);
void			fuck_the_duck(t_info *info);
void			fuck_the_duck_again(t_info *info);
void			fuck_the_duck_once_more(t_info *t_info);
void			how_many_bats(t_info *info);
void			how_many_ducks(t_info *info);
void			im_tired_of_fucking_the_duck(t_info *info);
void			jump_bunny_right_down(t_info *info);
void			jump_bunny_left_down(t_info *info);
void			jump_bunny_left_left(t_info *info);
void			jump_bunny_left_up(t_info *info);
void			jump_bunny_right_down(t_info *info);
void			jump_bunny_right_right(t_info *info);
void			jump_bunny_right_up(t_info *info);
void			jump_x_plus_one(t_info *info);
void			jump_x_minus_one(t_info *info);
void			jump_y_minus_one(t_info *info);
void			jump_y_plus_one(t_info *info);
void			jump_bunny_right_down(t_info *info);
void			killed_by_a_bat(t_info *info, int bat_nr);
void			killed_by_a_bat_again(t_info *info, int bat_nr);
void			leaving_hell(t_info *info);
void			leaving_hell_another_way(t_info *info);
void			leaving_hell_yet_another_way(t_info *info);
void			load_pictures3(t_info *info);
void			load_pictures4(t_info *info);
void			load_pictures5(t_info *info);
void			load_pictures6(t_info *info);
void			load_pictures7(t_info *info);
void			load_pictures9(t_info *info);
void			load_pictures10(t_info *info);
void			load_pictures11(t_info *info);
void			load_pictures12(t_info *info);
void			load_pictures13(t_info *info);
void			load_pictures14(t_info *info);
void			load_pictures15(t_info *info);
void			load_pictures16(t_info *info);
void			load_pictures17(t_info *info);
void			load_pictures18(t_info *info);
void			load_pictures19(t_info *info);
void			load_pictures20(t_info *info);
void			load_pictures21(t_info *info);
void			load_stuff(t_info *info);
void			map_dimensions(t_info *info);
void			moves_on_screen(t_info *info);
void			picture_cleaner(t_info *info);
void			print_error_message(int i);
void			print_error_message2(int i);
void			print_image(t_info *info, int x, int y);
void			put_img_to_img(t_imginfo *dst, t_imginfo *src, int x, int y);
void			put_pixel_img(t_imginfo *img, int x, int y, int color);
//void			set_font_helper(t_info *info);
void			quit_bat(t_info *info);
void			where_is_the_bunny_now(t_info *info, int k);
void			where_the_fuck_is_the_bunny(t_info *info);
void			why_am_i_leaving_hell(t_info *info);

#endif