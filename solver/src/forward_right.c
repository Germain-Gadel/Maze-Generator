/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct solver check_j_plus(struct solver solve)
{
    if (solve.maze[(solve.i)][(solve.j) + 1] == '*' && solve.status == 0) {
        solve.maze[solve.i][solve.j] = '+';
        solve.j += 1;
        solve.status += 1;
        solve.loop = 0;
    }
    return (solve);
}

struct solver right(struct solver solve)
{
    solve = check_i_minus(solve);
    solve = check_j_minus(solve);
    solve = check_i_plus(solve);

    return (solve);
}

struct solver find_which_right(struct solver solve)
{
    if (solve.i >= 1 && solve.maze[solve.i][solve.j + 1] == '\0' &&
        solve.back == 0) {
        solve.back = 1;
        if (solve.maze[solve.i + 1] == NULL && solve.j == (solve.x) - 1)
            solve = bottom_right(solve);
        else
            solve = right(solve);
    }
    return (solve);
}