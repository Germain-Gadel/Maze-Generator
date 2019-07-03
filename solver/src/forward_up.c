/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct solver check_i_minus(struct solver solve)
{
    if (solve.maze[(solve.i) - 1][(solve.j)] == '*' && solve.status == 0) {
        solve.maze[solve.i][solve.j] = '+';
        solve.i -= 1;
        solve.status += 1;
        solve.loop = 0;
    }
    return (solve);
}

struct solver top_left(struct solver solve)
{
    solve = check_i_plus(solve);
    solve = check_j_plus(solve);

    return (solve);
}

struct solver top_right(struct solver solve)
{
    solve = check_j_minus(solve);
    solve = check_i_plus(solve);

    return (solve);
}

struct solver top(struct solver solve)
{
    solve = check_j_plus(solve);
    solve = check_i_plus(solve);
    solve = check_j_minus(solve);

    return (solve);
}

struct solver find_which_top(struct solver solve)
{
    if (solve.i == 0 && solve.j >= 1 && solve.back == 0) {
        solve.back = 1;
        if (solve.i == 0 && solve.j == (solve.x) - 1)
            solve = top_right(solve);
        else
            solve = top(solve);
    }
    return (solve);
}