/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct solver find_all(struct solver solve)
{
    if (solve.back == 0) {
        solve.back = 1;
        solve = check_i_minus(solve);
        solve = check_j_plus(solve);
        solve = check_i_plus(solve);
        solve = check_j_minus(solve);
    }
    return (solve);
}

struct solver start_find(struct solver solve)
{
    if (solve.i == 0 && solve.j == 0 && solve.maze[0][1] == '*') {
        solve.maze[0][0] = '+';
        solve.j += 1;
    }
    if (solve.i == 0 && solve.j == 0 && solve.maze[1][0] == '*') {
        solve.maze[0][0] = '+';
        solve.i += 1;
    }
    return (solve);
}

struct solver find_next_star(struct solver solve)
{
    solve.back = 0;
    solve = start_find(solve);
    solve = find_which_left(solve);
    solve = find_which_top(solve);
    solve = find_which_right(solve);
    solve = find_which_bottom(solve);
    solve = find_all(solve);
    if (solve.status == 0) {
        solve.loop = 1;
    } else
        solve.status = 0;
    return (solve);
}