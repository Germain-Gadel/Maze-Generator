/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct solver check_i_minus_bt(struct solver solve)
{
    if (solve.maze[(solve.i) - 1][(solve.j)] == '+' && solve.status == 0
    && solve.direction != 1) {
        solve.maze[solve.i][solve.j] = '#';
        solve.i -= 1;
        solve.direction = 0;
        solve.status += 1;
        solve.loop = 0;
    }
    return (solve);
}

struct solver top_left_bt(struct solver solve)
{
    solve = check_i_plus_bt(solve);
    solve = check_j_plus_bt(solve);

    return (solve);
}

struct solver top_right_bt(struct solver solve)
{
    solve = check_j_minus_bt(solve);
    solve = check_i_plus_bt(solve);

    return (solve);
}

struct solver top_bt(struct solver solve)
{
    solve = check_j_plus_bt(solve);
    solve = check_i_plus_bt(solve);
    solve = check_j_minus_bt(solve);

    return (solve);
}

struct solver find_which_top_bt(struct solver solve)
{
    if (solve.i == 0 && solve.j >= 1 && solve.back == 0) {
        solve.back = 1;
        if (solve.i == 0 && solve.j == (solve.x) - 1)
            solve = top_right_bt(solve);
        else
            solve = top_bt(solve);
    }
    return (solve);
}