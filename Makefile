##
## EPITECH PROJECT, 2018
## makefile
## File description:
## to make
##

SRC		=	src/my_functions.c \
			src/my_printf.c \
			src/functions.c \
			src/type.c \
			src/type_2.c \
			src/my_put_nbr.c

OBJ		=       $(SRC:.c=.o)

CC	=	gcc

WFLAGS	=	-W -Wall -Werror -Wextra -pedantic

CFLAGS	=	-I./include

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC) $(WFLAGS)
	ar rc -o $(NAME) $(OBJ)

clean:
	rm -f *.o
	rm -f src/*.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all