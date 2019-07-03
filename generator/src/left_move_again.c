/*
** EPITECH PROJECT, 2019
** left_move_again for filling the maze
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

int left_else(struct coord dante)
{
    if (dante.maze[dante.i + 1] == NULL) {
        if (dante.maze[dante.i][dante.j - 1] == 'X' &&
            dante.maze[dante.i][dante.j - 2] == 'X' &&
            dante.maze[dante.i - 1][dante.j - 1] == 'X' &&
            dante.maze[dante.i][dante.j - 2] == 'X') {
            return (2);
        }
    } else if (dante.maze[dante.i][dante.j - 1] == 'X' &&
                dante.maze[dante.i - 1][dante.j - 1] == 'X' &&
                dante.maze[dante.i + 1][dante.j - 1] == 'X' &&
                dante.maze[dante.i][dante.j - 2] == 'X') {
        return (2);
    }
    return (-1);
}

int check_left_limits(struct coord dante, int random)
{
    int move = 0;

    if (random == 2 && dante.j != 0) {
        move = left_is_j_one(dante, move);
        switch (move) {
            case 2 :
                return (2);
        }
        move = left_is_i_zero(dante);
        switch (move) {
            case 2 :
                return (2);
            case -1 :
                return (-1);
        }
        return (left_else(dante));
    }
    return (-1);
}