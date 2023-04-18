# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 13:24:27 by hbechri           #+#    #+#              #
#    Updated: 2023/04/13 14:39:37 by hbechri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror -I headers/
SRCS = free.c ft_coordinates.c ft_elements.c ft_map_checker.c ft_map_format.c ft_map_read.c \
		ft_putstr_fd.c ft_split.c ft_strcmp.c ft_strrchr.c get_next_line.c get_next_line_utils.c key_hooks.c \
		moves.c path_checker.c player_moves.c put_textures.c so_long.c win.c ft_putnbr.c ft_map_walls_checker.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all