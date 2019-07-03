/*
** EPITECH PROJECT, 2019
** right_move for maze
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include <dante.h>

int right_j_max(struct coord dante)
{
    if (dante.maze[dante.i][dante.j + 1] == 'X' &&
        dante.maze[dante.i + 1][dante.j + 1] == 'X') {
        return (2);
    }
    return (0);
}

int right_j_else(struct coord dante)
{
    if (dante.maze[dante.i][dante.j + 1] == 'X' &&
        dante.maze[dante.i][dante.j + 2] == 'X' &&
        dante.maze[dante.i + 1][dante.j + 1] == 'X') {
        return (2);
    }
    return (0);
}

int right_is_i_zero(struct coord dante, int move)
{
    if (dante.i == 0) {
        if (dante.maze[dante.i][dante.j + 2] == '\0') {
            move = right_j_max(dante);
            switch (move) {
                case 2 :
                    return (2);
            }
        } else {
            move = right_j_else(dante);
            switch (move) {
                case 2 :
                    return (2);
            }
        }
        return (-1);
    }
    return (0);
}

int right_is_i_null(struct coord dante)
{
    if (dante.maze[(dante.i) + 1] == NULL) {
        if (dante.maze[(dante.i) - 1][(dante.j) + 1] == 'X' &&
            dante.maze[dante.i][(dante.j) + 1] == 'X' &&
            (dante.maze[dante.i][(dante.j) + 2] == 'X' ||
            dante.maze[dante.i][(dante.j) + 2] == '\0') &&
            dante.maze[dante.i][(dante.j) + 1] != '\0') {
            return (2);
        }
    } else if (dante.maze[(dante.i) - 1][(dante.j) + 1] == 'X' &&
                dante.maze[dante.i][(dante.j) + 1] == 'X' &&
                (dante.maze[dante.i][(dante.j) + 2] == 'X' ||
                dante.maze[dante.i][(dante.j) + 2] == '\0') &&
                dante.maze[dante.i][(dante.j) + 1] != '\0' &&
                dante.maze[(dante.i) + 1][(dante.j) + 1] == 'X') {
        return (2);
    }
    return (0);
}

int check_right_limits(struct coord dante, int random)
{
    int move = 0;

    if (random == 3 && dante.maze[dante.i][(dante.j) + 1] != '\0') {
        move = right_is_i_zero(dante, move);
        switch (move) {
            case 2 :
                return (3);
            case -1 :
                return (-1);
        }
        move = right_is_i_null(dante);
        switch (move) {
            case 2 :
                return (3);
        }
    }
    return (-1);
}