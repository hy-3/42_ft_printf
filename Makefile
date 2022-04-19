CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = 
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

re: fclean all

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

.PHONY: all re fclean clean
