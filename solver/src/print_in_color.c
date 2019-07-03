/*
** EPITECH PROJECT, 2019
** print stars in color
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

void test_char_print(struct solver solve, int xp, int yp, int color_state)
{
    if (solve.maze[xp][yp] == '+' || (xp == solve.i && yp == solve.j)) {
        if (color_state == 1) {
            printf("\033[42;1m \033[0m");
            //printf("%c[%d;%dmHello World%c[%dm\n",27,1,33,27,0);
            //printf("\033[1;31m");
            //printf("o");
            //printf("\033[0m");
        } else
            printf("o");
    } else if (solve.maze[xp][yp] == '*' ||
        solve.maze[xp][yp] == '#') {
        printf("\033[47;1m \033[0m");
        //printf("*");
    } else
        printf("\033[40;1m \033[0m");
        //printf("%c", solve.maze[xp][yp]);
}

void print_color(struct solver solve, int color_state)
{
    int xp = 0;
    int yp = 0;

    while (solve.maze[xp] != NULL) {
        while (solve.maze[xp][yp] != '\0') {
            test_char_print(solve, xp, yp, color_state);
            yp++;
        }
        if (solve.maze[xp + 1] != NULL)
            printf("\n");
        xp++;
        yp = 0;
    }
}