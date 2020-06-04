##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## pong
##

SRC     =      	101pong.c	\
				pongh.c

OBJ	=	$(SRC:.c=.o)

NAME    =       101pong

all:    $(NAME)

$(NAME)	:	$(NAME)
			gcc -o $(NAME) -lm $(SRC)

clean:
	rm -f *.o
	rm -f *~

fclean:	clean
		rm -f $(NAME)

re:     fclean all
