/*
** EPITECH PROJECT, 2019
** fix the exit of the maze
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct coord test_star_end(struct coord dante)
{
    if (dante.maze[(dante.y) - 2][(dante.x) - 1] == '+' &&
        dante.maze[(dante.y) - 1][(dante.x) - 2] == '+')
        dante.maze[(dante.y) - 2][(dante.x) - 2] = 'X';
    return (dante);
}

struct coord fix_exit(struct coord dante)
{
    int col = dante.x - 1;

    dante.maze[(dante.y) - 1][(dante.x) - 1] = '+';
    dante = test_star_end(dante);
    if (dante.maze[(dante.y) - 2][(dante.x) - 1] != '+' &&
        dante.maze[(dante.y) - 1][(dante.x) - 2] != '+') {
        while (dante.maze[(dante.y) - 1][col - 1] != '+' && col != 0) {
            dante.maze[(dante.y) - 1][col] = '+';
            col--;
        }
        dante.maze[(dante.y - 2)][col] = 'X';
        dante.maze[(dante.y - 1)][col] = '*';
    }
    return (dante);
}