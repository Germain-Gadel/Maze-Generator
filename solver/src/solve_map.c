/*
** EPITECH PROJECT, 2018
** Maze solver
** File description:
** by Quentin Lavieville
*/

#include <stdlib.h>
#include <time.h>
#include "dante.h"

struct solver intit_values(struct solver solve)
{
    solve.i = 0;
    solve.j = 0;
    solve.ct_end = 0;
    solve.draw = 0;
    solve.loop = 0;
    solve.status = 0;
    solve.end = solve.x * solve.y + 10000;
    solve.stuck = 0;

    return (solve);
}

struct solver solve_maze(struct solver solve)
{

    solve = intit_values(solve);

    for (;solve.ct_end < solve.end; solve.ct_end++) {
        solve = find_next_star(solve);
        if (solve.loop == 1) {
            solve.stuck += 1;
            solve = find_last_plus(solve);
        }
        if (solve.i == solve.y - 1 && solve.j == solve.x - 2)
            break;
    }
    return (solve);
}