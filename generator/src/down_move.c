/*
** EPITECH PROJECT, 2019
** down_move for filling the maze
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

int down_j_is_zero(struct coord dante)
{
    if (dante.maze[dante.i + 2] != NULL) {
        if (dante.maze[dante.i + 1][dante.j] == 'X' &&
            dante.maze[dante.i + 1][dante.j + 1] == 'X' &&
            dante.maze[dante.i + 2][dante.j] == 'X') {
            return (2);
        }
    } else if (dante.maze[dante.i + 2] == NULL) {
        if (dante.maze[dante.i + 1][dante.j] == 'X' &&
            dante.maze[dante.i + 1][dante.j + 1] == 'X') {
            return (2);
        }
    }
    return (0);
}

int down_is_j_zero(struct coord dante, int move)
{
    if (dante.j == 0) {
        move = down_j_is_zero(dante);
        if (move == 2)
            return (2);
    }
    return (0);
}

int down_is_null(struct coord dante)
{
    if (dante.maze[dante.i + 2] == NULL) {
        if (dante.maze[dante.i + 1][dante.j] == 'X' &&
            (dante.maze[dante.i + 1][dante.j + 1] == 'X' ||
            dante.maze[dante.i + 1][dante.j + 1] == '\0') &&
            dante.maze[dante.i + 1][dante.j - 1] == 'X') {
            return (2);
        }
    }
    return (0);
}

int down_is_i_null(struct coord dante, int move)
{
    if (dante.maze[dante.i + 2] != NULL) {
        if (dante.maze[dante.i + 1][dante.j] == 'X' &&
                (dante.maze[dante.i + 1][dante.j + 1] == 'X' ||
                dante.maze[dante.i + 1][dante.j + 1] == '\0') &&
                dante.maze[dante.i + 1][dante.j - 1] == 'X' &&
                dante.maze[dante.i + 2][dante.j] == 'X') {
            return (2);
        }
        return (-1);
    }
    move = down_is_null(dante);
    switch (move) {
        case 2 :
            return (2);
    }
    return (0);
}

int check_down_limits(struct coord dante, int random)
{
    int move = 0;

    if (random == 1 && dante.maze[dante.i + 1] != NULL) {
        move = down_is_j_zero(dante, move);
        switch (move) {
            case 2 :
                return (1);
        }
        move = down_is_i_null(dante, move);
        switch (move) {
            case 2 :
                return (1);
        }
    }
    return (-1);
}