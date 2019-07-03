/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include <dante.h>

struct coord find_all(struct coord dante)
{
    if (dante.back == 0) {
        dante.back = 1;
        dante = check_i_minus(dante);
        dante = check_j_plus(dante);
        dante = check_i_plus(dante);
        dante = check_j_minus(dante);
    }
    return (dante);
}

struct coord find_last_star(struct coord dante)
{
    dante.back = 0;
    dante = find_which_left(dante);
    dante = find_which_top(dante);
    dante = find_which_right(dante);
    dante = find_which_bottom(dante);
    dante = find_all(dante);
    if (dante.loop >= 100) {
        dante.direction = 4;
    }
    dante.status = 0;
    return (dante);
}