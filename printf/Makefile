# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joanda-s <joanda-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 22:40:53 by joanda-s          #+#    #+#              #
#    Updated: 2023/04/27 01:40:26 by joanda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_hexa.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_unint.c

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	cc -c $(FLAGS) $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

