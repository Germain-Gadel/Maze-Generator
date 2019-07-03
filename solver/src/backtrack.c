/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

struct solver find_all_bt(struct solver solve)
{
    if (solve.back == 0) {
        solve.back = 1;
        solve = check_i_minus_bt(solve);
        solve = check_j_plus_bt(solve);
        solve = check_i_plus_bt(solve);
        solve = check_j_minus_bt(solve);
    }
    return (solve);
}

struct solver find_last_plus(struct solver solve)
{
    solve.back = 0;
    solve = find_which_left_bt(solve);
    solve = find_which_top_bt(solve);
    solve = find_which_right_bt(solve);
    solve = find_which_bottom_bt(solve);
    solve = find_all_bt(solve);
    if (solve.stuck > 10)
        solve.direction = 4;
    solve.status = 0;
    return (solve);
}