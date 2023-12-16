# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 11:11:28 by rpambhar          #+#    #+#              #
#    Updated: 2023/10/17 12:22:53 by rpambhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
		ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strtrim.c ft_substr.c ft_strnstr.c\
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_striteri.c

BONUS_SRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

Header = libft.h

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

bonus:	$(OBJ) $(BONUS_OBJ)
		ar rc $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
		rm -rf $(OBJ) $(BONUS_OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
