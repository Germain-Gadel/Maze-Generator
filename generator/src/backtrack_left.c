/*
** EPITECH PROJECT, 2019
** find the last star
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include <dante.h>

struct coord check_j_minus(struct coord dante)
{
    if (dante.maze[(dante.i)][(dante.j) - 1] == '*' && dante.status == 0
    && dante.direction != 3) {
        dante.maze[dante.i][dante.j] = '+';
        dante.j -= 1;
        dante.direction = 2;
        dante.status += 1;
        dante.loop = 0;
    }
    return (dante);
}

struct coord left(struct coord dante)
{
    dante = check_i_minus(dante);
    dante = check_j_plus(dante);
    dante = check_i_plus(dante);

    return (dante);
}

struct coord find_which_left(struct coord dante)
{
    if (dante.j == 0 && dante.i <= (dante.y) - 2 && dante.back == 0) {
        dante.back = 1;
        if (dante.i == 0 && dante.j == 0)
            dante = top_left(dante);
        else
            dante = left(dante);
    }
    return (dante);
}