# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 13:59:11 by rpambhar          #+#    #+#              #
#    Updated: 2023/10/20 14:04:29 by rpambhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_parse.c ft_format.c utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
