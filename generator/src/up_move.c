/*
** EPITECH PROJECT, 2019
** up_move for maze
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

int up_j_is_zero(struct coord dante)
{
    if (dante.i >= 2) {
        if (dante.maze[(dante.i) - 1][dante.j] == 'X' &&
            dante.maze[(dante.i) - 1][(dante.j) + 1] == 'X' &&
            dante.maze[(dante.i) - 2][dante.j] == 'X') {
            return (2);
        }
    } else if (dante.maze[(dante.i) - 1][dante.j] == 'X' &&
                dante.maze[(dante.i) - 1][(dante.j) + 1] != '\0') {
        return (2);
    }
    return (0);
}

int up_is_j_zero(struct coord dante, int move)
{
    if (dante.j == 0) {
        move = up_j_is_zero(dante);
        if (move == 2)
            return (move);
    }
    return (0);
}

int up_j_max(struct coord dante)
{
    if (dante.maze[dante.i][dante.j + 1] == '\0') {
        if (dante.maze[dante.i - 1][dante.j] == 'X' &&
            dante.maze[dante.i - 2][dante.j] == 'X' &&
            dante.maze[dante.i - 1][dante.j - 1] == 'X') {
            return (2);
        }
    } else {
        if (dante.maze[(dante.i) - 1][dante.j] == 'X' &&
            dante.maze[(dante.i) - 1][(dante.j) - 1] == 'X' &&
            dante.maze[(dante.i) - 1][(dante.j) + 1] == 'X' &&
            dante.maze[(dante.i) - 2][dante.j] == 'X') {
            return (2);
        }
    }
    return (0);
}

int up_is_i_null(struct coord dante, int move)
{
    if (dante.i >= 2) {
        move = up_j_max(dante);
        switch (move) {
            case 2 :
                return (2);
            case 0 :
                return (0);
        }
    } else if (dante.maze[(dante.i) - 1][dante.j] == 'X' &&
                dante.maze[(dante.i) - 1][(dante.j) - 1] == 'X' &&
                dante.maze[(dante.i) - 1][(dante.j) + 1] == 'X') {
        return (2);
    }
    return (0);
}

int check_up_limits(struct coord dante, int random)
{
    int move = 0;

    if (random == 0 && dante.i >= 1) {
        move = up_is_j_zero(dante, move);
        switch (move) {
            case 2 :
                return (0);
        }
        move = up_is_i_null(dante, move);
        switch (move) {
            case 2 :
                return (0);
        }
    }
    return (-1);
}