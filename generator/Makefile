##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile by Quentin Lavieville
##

SRC	=	src/main.c	\
		src/fill_maze.c	\
		src/fill_maze_rand.c	\
		src/generate_maze.c	\
		src/my_strcmp.c		\
		src/backtrack.c	\
		src/free_double.c	\
		src/print_in_color.c	\
		src/left_move.c	\
		src/left_move_again.c	\
		src/right_move.c	\
		src/up_move.c	\
		src/down_move.c	\
		src/backtrack_down.c	\
		src/backtrack_up.c	\
		src/backtrack_right.c	\
		src/backtrack_left.c	\
		src/random.c	\
		src/fix_exit.c	\

INC_DIR	=	$(realpath ./include)

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

CFLAGS	+=	-Wall -Wextra -I$(INC_DIR)

CFLAGS_DEBUG	+=	-Wall -Wextra -I$(INC_DIR) -g

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

debug:	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS_DEBUG)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
