/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct solver check_j_minus(struct solver solve)
{
    if (solve.maze[(solve.i)][(solve.j) - 1] == '*' && solve.status == 0) {
        solve.maze[solve.i][solve.j] = '+';
        solve.j -= 1;
        solve.status += 1;
        solve.loop = 0;
    }
    return (solve);
}

struct solver left(struct solver solve)
{
    solve = check_i_minus(solve);
    solve = check_j_plus(solve);
    solve = check_i_plus(solve);

    return (solve);
}

struct solver find_which_left(struct solver solve)
{
    if (solve.j == 0 && solve.i <= (solve.y) - 2 && solve.back == 0) {
        solve.back = 1;
        if (solve.i == 0 && solve.j == 0)
            solve = top_left(solve);
        else
            solve = left(solve);
    }
    return (solve);
}