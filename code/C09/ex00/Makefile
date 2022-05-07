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


all : $(NAME)

$(NAME) : $(OFILE)
	$(AR) $(ARFLAGS) -c $@ $(OFILE) $(HEADER)



clean :
	rm $(OFILE) $(NAME)
