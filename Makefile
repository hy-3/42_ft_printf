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
	base_ten_power.c \
	cust_putnbr_int.c \
	cust_putnbr_unsigned_int.c \
	cust_putchar.c
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
