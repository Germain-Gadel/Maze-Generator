##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile by Quentin Lavieville
##

SRC	=	src/main.c	\
		src/map.c	\
		src/print.c	\
		src/my_str_to_word_array.c	\
		src/my_strtwa_2.c	\
		src/solve_map.c		\
		src/forward.c	\
		src/forward_down.c	\
		src/forward_left.c	\
		src/forward_right.c	\
		src/forward_up.c	\
		src/print_in_color.c	\
		src/backtrack_up.c	\
		src/backtrack_down.c	\
		src/backtrack_right.c	\
		src/backtrack_left.c	\
		src/backtrack.c	\

INC_DIR	=	$(realpath ./include)

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

CFLAGS	+=	-Wall -Wextra -I$(INC_DIR)

CFLAGS_DEBUG	+=	-Wall -Wextra -I$(INC_DIR) -g

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

debug:
	gcc -o $(NAME) $(OBJ) $(CFLAGS_DEBUG)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
