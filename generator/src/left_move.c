/*
** EPITECH PROJECT, 2019
** left_move for filling the maze
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

int left_inot_and_jo(struct coord dante)
{
    if (dante.maze[dante.i][dante.j - 1] == 'X' &&
        dante.maze[dante.i - 1][dante.j - 1] == 'X' &&
        dante.maze[dante.i + 1][dante.j - 1] == 'X') {
        return (2);
    }
    return (0);
}

int left_inull_and_jo(struct coord dante)
{
    if (dante.maze[dante.i][dante.j - 1] == 'X' &&
        dante.maze[dante.i - 1][dante.j - 1] == 'X') {
        return (2);
    }
    return (0);
}

int left_izero_and_jo(struct coord dante)
{
    if (dante.maze[dante.i][dante.j - 1] == 'X' &&
        dante.maze[(dante.i) + 1][(dante.j) - 1] == 'X' &&
        dante.maze[(dante.i) - 1][(dante.j) - 1] == 'X') {
        return (2);
    }
    return (0);
}

int left_is_j_one(struct coord dante, int move)
{
    if (dante.j == 1) {
        if (dante.i == 0)
            move = left_izero_and_jo(dante);
        else if (dante.maze[dante.i + 1] == NULL)
            move = left_inull_and_jo(dante);
        else
            move = left_inot_and_jo(dante);
        switch (move) {
            case 2 :
                return (2);
        }
    }
    return (0);
}

int left_is_i_zero(struct coord dante)
{
    if (dante.i == 0) {
        if (dante.maze[dante.i][dante.j - 1] == 'X' &&
            dante.maze[dante.i + 1][dante.j - 1] == 'X' &&
            dante.maze[dante.i][dante.j - 2] == 'X') {
            return (2);
        }
        return (-1);
    }
    return (0);
}