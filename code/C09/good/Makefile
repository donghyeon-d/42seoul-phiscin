CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_strcmp.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strlen.c
SRC_DIR = srcs
HEADER = $(HEADER_DIR)/ft.h
HEADER_DIR = includes
OFILE = ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o

all : $(NAME)

$(OFILE) :
	gcc $(CFLAGS) -c $(SRC) -I $(HEADER_DIR)

$(NAME) : $(OFILE)
	ar rc $@ $^
	mv $(OFILE) $(SRC_DIR)

clean :
	cd $(SRC_DIR)
	rm $(OFILE)

fclean : 
	rm $(NAME)

re :
	fclean all


