ARFLAGS = rc
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = BSQ
SRC = main.c
HEADER = ft.h
HEADER_DIR = .
OFILE = $(SRC:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(HEADER_DIR)

all : $(NAME)

$(NAME) : $(OFILE)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm -f $(OFILE)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
