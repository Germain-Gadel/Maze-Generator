/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include <dante.h>

struct coord check_i_plus(struct coord dante)
{
    if (dante.maze[(dante.i) + 1][(dante.j)] == '*' && dante.status == 0
    && dante.direction != 0) {
        dante.maze[dante.i][dante.j] = '+';
        dante.i += 1;
        dante.direction = 1;
        dante.status += 1;
        dante.loop = 0;
    }
    return (dante);
}

struct coord bottom_right(struct coord dante)
{
    dante = check_i_minus(dante);
    dante = check_j_minus(dante);

    return (dante);
}

struct coord bottom(struct coord dante)
{
    dante = check_j_minus(dante);
    dante = check_i_minus(dante);
    dante = check_j_plus(dante);

    return (dante);
}

struct coord bottom_left(struct coord dante)
{
    dante = check_i_minus(dante);
    dante = check_j_plus(dante);

    return (dante);
}

struct coord find_which_bottom(struct coord dante)
{
    if (dante.maze[(dante.i) + 1] == NULL && dante.j <= (dante.x) - 2 &&
        dante.back == 0) {
        dante.back = 1;
        if (dante.maze[dante.i + 1] == NULL && dante.j == 0)
            dante = bottom_left(dante);
        else
            dante = bottom(dante);
    }
    return (dante);
}