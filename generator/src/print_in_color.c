/*
** EPITECH PROJECT, 2019
** print stars in color
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

void test_char_print(struct coord dante, int xp, int yp)
{
    if (xp == dante.i && yp == dante.j) {
        printf("%c", dante.maze[xp][yp]);
    } else if (dante.maze[xp][yp] == '*' || dante.maze[xp][yp] == '+') {
        printf("*");
    } else
        printf("%c", dante.maze[xp][yp]);
}

void print_color(struct coord dante)
{
    int xp = 0;
    int yp = 0;

    while (dante.maze[xp] != NULL) {
        while (dante.maze[xp][yp] != '\0') {
            test_char_print(dante, xp, yp);
            yp++;
        }
        if (dante.maze[xp + 1] != NULL)
            printf("\n");
        xp++;
        yp = 0;
    }
}