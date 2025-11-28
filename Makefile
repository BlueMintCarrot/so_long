# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/27 13:43:12 by joada-si          #+#    #+#              #
#    Updated: 2025/11/28 23:08:06 by joada-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
FLAGS = -Wall -Werror -Wextra -g
SOURCE = $(addprefix source/, $(SRC))
SRC = animations.c animator.c bat_animation1.c bat_animation2.c bat_movement1.c \
		bat_movement2.c bat_vs_bunny.c bat.c bunny_movement.c creating_images.c coordinates.c \
		ducks1.c ducks2.c extras.c flood_fill.c free_stuff.c get_next_line.c \
		hell.c jump_bunny_left.c jump_bunny_right.c libft1.c libft2.c load_pictures1.c \
		load_pictures2.c load_pictures3.c load_pictures4.c load_pictures5.c \
		load_pictures6.c map_verifications1.c map_verifications2.c map_verifications3.c moves.c \
		picture_cleaner1.c picture_cleaner2.c picture_cleaner3.c prinf1.c \
		prinf2.c so_long.c
OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SOURCE:source/%.c=%.o))
MLX_DIR = ./mlx
MLX_FLAGS = -lXext -lX11 -lm -lz
MLX = $(MLX_DIR)/libmlx_Linux.a $(MLX_FLAGS)

all: $(NAME)

$(NAME): $(OBJS) $(MLX)
		@cc $(FLAGS) $(OBJS) $(MLX) -o $(NAME)
		@make -s norm
		
$(OBJS_DIR)/%.o: source/%.c
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

$(MLX):
	@$(MAKE) -C $(MLX_DIR)
	
norm:
	@norminette $(SOURCE) | egrep -B1 'Error|Warning' >check_norm || true
	@if [ -s check_norm ]; then \
		echo "\e[1;31mNORMINETTE: KO\e[0m"; \
		echo "\e[1;31m"; \
		cat check_norm | egrep 'Error|Warning' | awk '{gsub(/\033\[94m/,""); gsub(/\033\[0m/,""); print}'; \
	else \
		echo "\e[1;32mNORMINETTE: OK\e[0m"; \
	fi
	@rm check_norm

clean:
		$(MAKE) clean -C $(MLX_DIR)
		rm -rf $(OBJS_DIR)
	
fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean norm re
