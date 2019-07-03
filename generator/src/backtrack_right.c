/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include <dante.h>

struct coord check_j_plus(struct coord dante)
{
    if (dante.maze[(dante.i)][(dante.j) + 1] == '*' && dante.status == 0
    && dante.direction != 2) {
        dante.maze[dante.i][dante.j] = '+';
        dante.j += 1;
        dante.direction = 3;
        dante.status += 1;
        dante.loop = 0;
    }
    return (dante);
}

struct coord right(struct coord dante)
{
    dante = check_i_minus(dante);
    dante = check_j_minus(dante);
    dante = check_i_plus(dante);

    return (dante);
}

struct coord find_which_right(struct coord dante)
{
    if (dante.i >= 1 && dante.maze[dante.i][dante.j + 1] == '\0' &&
        dante.back == 0) {
        dante.back = 1;
        if (dante.maze[dante.i + 1] == NULL && dante.j == (dante.x) - 1)
            dante = bottom_right(dante);
        else
            dante = right(dante);
    }
    return (dante);
}