##
## EPITECH PROJECT, 2022
## makefile
## File description:
## file
##

SRC 	=	my_lsa.c	\
		my_ls.c		\
		ls_d.c		\
		l

OBJ     =       $(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

NAME	=	 my_ls

$(NAME):
		gcc -o $(NAME) $(SRC) $(CFLAGS)

all:		$(NAME)

clean:		rm -f*.c~

fclean:		clean
$(RM $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
