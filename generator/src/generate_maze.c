/*
** EPITECH PROJECT, 2019
** generate maze functions for dante
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct coord generate_maze(struct coord dante, char *per)
{
    dante.j = 0;
    dante.i = 0;
    while (dante.maze[dante.i] != NULL) {
        while (dante.j <= dante.x - 1) {
            dante.maze[dante.i][dante.j] = 'X';
            dante.j += 1;
        }
        dante.j = 0;
        dante.i += 1;
    }
    dante.i = 0;
    if (per != NULL && my_strcmp(per, "perfect") == 0) {
        fill_maze(dante);
    }
    else {
        fill_maze_rand(dante);
    }
    return (dante);
}

struct coord generate(struct coord dante, char *per)
{
    dante.i = 0;
    dante.j = 0;
    dante.maze = malloc(sizeof(char *) * (dante.y + 2));
    while (dante.i < dante.y) {
        dante.maze[dante.i] = malloc(sizeof(char) * (dante.x + 2));
        dante.maze[dante.i][dante.x + 1] = '\0';
        dante.i += 1;
    }
    dante.maze[dante.i] = NULL;
    dante.i = 0;
    dante = generate_maze(dante, per);
    dante.maze = free_double(dante.maze);
    return (dante);
}
