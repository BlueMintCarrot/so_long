CC = cc
CFLAGS = -g -Wall -Wextra -Werror
NAME = so_long

SRC = $(addprefix source/, $(SOURCES)) 

SOURCES = animations.c bat_animation.c bat.c bat_animation2.c bat_movement.c bat_movement2.c bat_vs_bunny.c bunny_movement.c creating_images.c \
			ducks.c ducks2.c extras.c extras2.c extras3.c flood_fill.c free_stuff.c hell.c jump_bunny.c \
			jump_bunny2.c load_pictures1.c load_pictures2.c load_pictures3.c load_pictures4.c load_pictures5.c load_pictures6.c load_pictures7.c \
			map_verifications.c map_verifications2.c moves.c so_long.c
SOURCES_GNL = get_next_line.c get_next_line_utils.c

OBJS_DIR = obj
OBJECTS = $(addprefix $(OBJS_DIR)/, $(SRC:source/%.c=%.o))

MLX_DIR = ./mlx/
MLX = $(MLX_DIR)libmlx.a -lXext -lX11 -lm -lz

LIBFT_DIR = ./Libft/
LIBFT = $(LIBFT_DIR)libft.a

PRINTF_DIR = ./printf/
PRINTF = $(PRINTF_DIR)libftprintf.a

all: $(NAME)

$(NAME): $(OBJECTS) $(MLX) $(LIBFT) $(PRINTF)
		$(CC) $(CFLAGS) $(OBJECTS) -o $@ $(MLX) $(LIBFT) $(PRINTF)
		norminette $(SRC) $(PRINTF_DIR) $(LIBFT_DIR)
$(OBJS_DIR)/%.o: source/%.c
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(MLX): 
	$(MAKE) -C $(MLX_DIR)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

clean:
		$(MAKE) clean -C $(LIBFT_DIR)
		$(MAKE) clean -C $(PRINTF_DIR)
		$(MAKE) clean -C $(MLX_DIR)
		rm -rf $(OBJS_DIR)

fclean: clean
		$(MAKE) fclean -C $(LIBFT_DIR)
		$(MAKE) fclean -C $(PRINTF_DIR)
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re