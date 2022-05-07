AR = ar
ARFLAGS = rc
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_strcmp.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strlen.c
SRC_DIR = srcs
HEADER = $(HEADER_DIR)/ft.h
HEADER_DIR = includes
OFILE = $(SRC:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(HEADER_DIR)

all : $(NAME)

$(NAME) : $(OFILE)
	$(AR) $(ARFLAGS) $@ $^

clean :
	rm $(OFILE)

fclean : clean
	rm $(NAME)

re : fclean all
