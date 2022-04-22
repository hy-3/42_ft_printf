NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = \
	ft_printf.c \
	c_conv.c \
	s_conv.c \
	p_conv.c \
	d_i_conv.c \
	u_conv.c \
	x_conv.c \
	is_char_match.c \
	ft_itoa_int.c \
	ft_itoa_unsigned_int.c \
	count_digits.c \
	ft_putstr.c \
	ft_putchar.c
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

re: fclean all

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ)

.PHONY: all re fclean clean
