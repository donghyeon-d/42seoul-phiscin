CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op
SRC = ft_atoi.c ft_operate.c ft_print.c main.c
HEADER = ft.h
OFILE = $(SRC:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I .

all : $(NAME)

$(NAME) : $(OFILE)
	gcc -Wall -Wextra -Werror -o $(NAME) -I . $(OFILE)

clean :
	rm -f $(OFILE)

fclean : clean
	rm -f $(NAME)

re : fclean all
