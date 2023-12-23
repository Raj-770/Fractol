NAME	:= fractol

# Compiler
CC		:=	cc
CFLAGS	:=	-Wextra -Wall -Werror

# MLX42
LIBMLX	:=	./lib/MLX42
# HEADERS	:=	-I ./include -I $(LIBMLX)/include
LIBS	:=	$(LIBMLX)/build/libmlx42.a -ldl -lglfw -pthread -lm

#Libft
LIBFT_PATH	:=	./lib/libft/
LIBFT_NAME	:=	libft.a
LIBFT		:=	$(LIBFT_PATH)$(LIBFT_NAME)

#ft_printf
FT_PRINTF_PATH	:=	./lib/ft_printf/
FT_PRINTF_NAME	:=	libftprintf.a
FT_PRINTF		:=	$(FT_PRINTF_PATH)$(FT_PRINTF_NAME)

# Includes
INC		:=	-I $(LIBMLX)/include\
			-I ./lib/libft/\
			-I ./lib/ft_printf\


SRCS	:=	fractol.c \
			init.c \
			fractals/mandelbrot.c \
			fractals/julia.c \
			fractals/tricorn.c \
			colors.c \
			messages.c \
			parse_args.c \
			utils.c \
			draw_fractal.c \
			controls/zoom.c \
			controls/mouse.c
OBJS	:= ${SRCS:.c=.o}

all: libmlx $(LIBFT) $(FT_PRINTF) $(NAME)

# Compiling MLX42
libmlx:
	@echo "Making MLX42..."
	@cmake $(LIBMLX) -B $(LIBMLX)/build && make -C $(LIBMLX)/build -j4

# Making Libft
$(LIBFT):
	@echo "Making Libft..."
	@make -sC $(LIBFT_PATH)

# Making ft_printf
$(FT_PRINTF):
	@echo "Making ft_printf..."
	@make -sC $(FT_PRINTF_PATH)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(INC)

# Compiling Fractol
$(NAME): $(OBJS)
	@echo "Compiling Fractol..."
	@$(CC) $(OBJS) $(LIBS) $(LIBFT) $(FT_PRINTF) $(INC) -o $(NAME)

clean:
	@echo "Cleaning object files..."
	@rm -rf $(OBJS)
	@rm -rf $(LIBMLX)/build
	@make clean -sC $(LIBFT_PATH)

fclean: clean
	@echo "Cleaning Fractol"
	@rm -f $(NAME)
	@rm -f $(LIBFT_PATH)$(LIBFT_NAME)

re: clean all

.PHONY: all, clean, fclean, re, libmlx