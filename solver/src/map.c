/*
** EPITECH PROJECT, 2018
** Map BSQ
** File description:
** by Quentin Lavieville
*/

#include "dante.h"
#include <stdlib.h>
#include <stdio.h>

int nbrline(char *buffer)
{
    int i = 0;
    int bckn = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            bckn++;
        i++;
    }
    bckn++;
    return (bckn);
}

int nbrcols(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\n' && buffer[i] != '\0') {
        i++;
    }
    i++;
    return (i);
}

struct solver allocdouble(int bckn, int cols, struct solver solve)
{
    solve.i = 0;
    solve.j = 0;
    solve.maze = malloc(sizeof(char *) * (bckn + 2));
    while (solve.i < solve.y) {
        solve.maze[solve.i] = malloc(sizeof(char) * (cols + 2));
        solve.maze[solve.i][cols + 1] = '\0';
        solve.i += 1;
    }
    solve.maze[solve.i] = NULL;
    solve.i = 0;
    return (solve);
}

void putinarray(char *buffer, int color_state)
{
    int bckn = nbrline(buffer);
    int cols = nbrcols(buffer);
    struct solver solve;

    solve.y = bckn;
    solve.x = cols;
    solve = allocdouble(bckn, cols, solve);
    solve.maze = my_strtwa(buffer, '\n');
    solve.maze[bckn - 1][cols - 2] = '*';
    solve = solve_maze(solve);
    print_color(solve, color_state);
}