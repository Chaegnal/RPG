##
## EPITECH PROJECT, 2023
## B-CPE-200-PAR-2-1-dante-wilson.bordichon
## File description:
## Makefile
##

CC  =	gcc
CCFLAGS = -Wextra -Wall -g3
LDFLAGS = 	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

SRC =	src/main.c								\

OBJ =	$(SRC:.c=.o)

CFLAGS = -g

NAME =	rpg

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) -f *~
	cd include && $(RM) *~
	cd src && $(RM) *~
	cd src/lib && $(RM) *~

fclean: clean
	$(RM) -f $(NAME)

re: fclean all
