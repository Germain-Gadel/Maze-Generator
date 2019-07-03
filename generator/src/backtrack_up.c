/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include <dante.h>

struct coord check_i_minus(struct coord dante)
{
    if (dante.maze[(dante.i) - 1][(dante.j)] == '*' && dante.status == 0
    && dante.direction != 1) {
        dante.maze[dante.i][dante.j] = '+';
        dante.i -= 1;
        dante.direction = 0;
        dante.status += 1;
        dante.loop = 0;
    }
    return (dante);
}

struct coord top_left(struct coord dante)
{
    dante = check_i_plus(dante);
    dante = check_j_plus(dante);

    return (dante);
}

struct coord top_right(struct coord dante)
{
    dante = check_j_minus(dante);
    dante = check_i_plus(dante);

    return (dante);
}

struct coord top(struct coord dante)
{
    dante = check_j_plus(dante);
    dante = check_i_plus(dante);
    dante = check_j_minus(dante);

    return (dante);
}

struct coord find_which_top(struct coord dante)
{
    if (dante.i == 0 && dante.j >= 1 && dante.back == 0) {
        dante.back = 1;
        if (dante.i == 0 && dante.j == (dante.x) - 1)
            dante = top_right(dante);
        else
            dante = top(dante);
    }
    return (dante);
}