/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct solver check_i_plus(struct solver solve)
{
    if (solve.maze[(solve.i) + 1][(solve.j)] == '*' && solve.status == 0) {
        solve.maze[solve.i][solve.j] = '+';
        solve.i += 1;
        solve.status += 1;
        solve.loop = 0;
    }
    return (solve);
}

struct solver bottom_right(struct solver solve)
{
    solve = check_i_minus(solve);
    solve = check_j_minus(solve);

    return (solve);
}

struct solver bottom(struct solver solve)
{
    solve = check_j_minus(solve);
    solve = check_i_minus(solve);
    solve = check_j_plus(solve);

    return (solve);
}

struct solver bottom_left(struct solver solve)
{
    solve = check_i_minus(solve);
    solve = check_j_plus(solve);

    return (solve);
}

struct solver find_which_bottom(struct solver solve)
{
    if (solve.maze[(solve.i) + 1] == NULL && solve.j <= (solve.x) - 2 &&
        solve.back == 0) {
        solve.back = 1;
        if (solve.maze[solve.i + 1] == NULL && solve.j == 0)
            solve = bottom_left(solve);
        else
            solve = bottom(solve);
    }
    return (solve);
}