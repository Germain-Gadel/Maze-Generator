/*
** EPITECH PROJECT, 2019
** allocation and free for double array
** File description:
** by Quentin Lavieville
*/

#include "dante.h"

char **free_double(char **maze)
{
    int i = 0;
    int line = 0;

    while (maze[line] != NULL) {
        line++;
    }
    for (; i != line; i++) {
        free(maze[i]);
    }
    free(maze);
    return (maze);
}
