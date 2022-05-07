CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op
SRC = $(SRC_DIR)/ft_atoi.c $(SRC_DIR)/ft_operate.c $(SRC_DIR)/ft_print.c main.c
SRC_DIR = srcs
HEADER = $(HEADER_DIR)/ft.h
HEADER_DIR = includes
OFILE = $(SRC:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(HEADER_DIR)

all : $(NAME)

$(NAME) : $(OFILE)
	gcc -Wall -Wextra -Werror -o $(NAME) -I $(HEADER_DIR) $(OFILE)

clean :
	rm -f

fclean : clean
	rm $(NAME)

re : fclean all
