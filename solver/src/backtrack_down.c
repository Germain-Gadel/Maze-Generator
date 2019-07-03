/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct solver check_i_plus_bt(struct solver solve)
{
    if (solve.maze[(solve.i) + 1][(solve.j)] == '+' && solve.status == 0
    && solve.direction != 0) {
        solve.maze[solve.i][solve.j] = '#';
        solve.i += 1;
        solve.direction = 1;
        solve.status += 1;
        solve.loop = 0;
    }
    return (solve);
}

struct solver bottom_right_bt(struct solver solve)
{
    solve = check_i_minus_bt(solve);
    solve = check_j_minus_bt(solve);

    return (solve);
}

struct solver bottom_bt(struct solver solve)
{
    solve = check_j_minus_bt(solve);
    solve = check_i_minus_bt(solve);
    solve = check_j_plus_bt(solve);

    return (solve);
}

struct solver bottom_left_bt(struct solver solve)
{
    solve = check_i_minus_bt(solve);
    solve = check_j_plus_bt(solve);

    return (solve);
}

struct solver find_which_bottom_bt(struct solver solve)
{
    if (solve.maze[(solve.i) + 1] == NULL && solve.j <= (solve.x) - 2 &&
        solve.back == 0) {
        solve.back = 1;
        if (solve.maze[solve.i + 1] == NULL && solve.j == 0)
            solve = bottom_left_bt(solve);
        else
            solve = bottom_bt(solve);
    }
    return (solve);
}