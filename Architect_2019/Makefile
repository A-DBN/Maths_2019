##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## pong
##

SRC     =      	architect_h.c	\
				find_arg.c	\
				102architect.c

OBJ	=	$(SRC:.c=.o)

NAME    =       102architect

all:    $(NAME)

$(NAME)	:	$(NAME)
			gcc -o $(NAME) -lm $(SRC)

clean:
	rm -f *.o
	rm -f *~
	rm -f vgc*

fclean:	clean
		rm -f $(NAME)

re:     fclean all
