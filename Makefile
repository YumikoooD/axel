##
## EPITECH PROJECT, 2022
## makefile
## File description:
## file
##

SRC 	=	step2.c	\
		lib/my/my_putchar.c	\
		lib/my/my_strlen.c

OBJ     =       $(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

NAME	=	 bsq

$(NAME):
		gcc -o $(NAME) $(SRC) $(CFLAGS)

all:		$(NAME)

clean:
		rm -f *~
		$(RM) $(NAME)

fclean:		clean
		rm -rf $(NAME)

re: 		fclean $(NAME)

.PHONY: 	all clean fclean re
