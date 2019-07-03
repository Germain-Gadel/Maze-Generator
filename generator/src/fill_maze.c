/*
** EPITECH PROJECT, 2019
** fill the maze
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include <dante.h>

int random_gen(int range)
{
    int num;

    num = rand() % range;
    if (num < 250)
        return (0);
    if (num >= 250 && num < 500)
        return (1);
    num = rand_else(num);
    switch (num) {
        case 2 :
            return (2);
        case 3 :
            return (3);
    }
    return (-1);
}

struct coord check_direction_y(struct coord dante)
{
    if (check_down_limits(dante, dante.random) == 1) {
        dante.maze[(dante.i) + 1][dante.j] = '*';
        dante.i += 1;
        dante.draw++;
        dante.loop = 0;
    }
    else if (check_up_limits(dante, dante.random) == 0) {
        dante.maze[(dante.i) - 1][dante.j] = '*';
        dante.i--;
        dante.draw++;
        dante.loop = 0;
    }
    return (dante);
}

struct coord check_direction_x(struct coord dante)
{
    if (check_left_limits(dante, dante.random) == 2) {
        dante.maze[dante.i][(dante.j) - 1] = '*';
        dante.j -= 1;
        dante.draw++;
        dante.loop = 0;
    }
    else if (check_right_limits(dante, dante.random) == 3) {
        dante.maze[dante.i][(dante.j) + 1] = '*';
        dante.j += 1;
        dante.draw++;
        dante.loop = 0;
    }
    return (dante);
}

struct coord init_values(struct coord dante)
{
    dante.random = 0;
    dante.ct_end = 0;
    dante.draw = 0;
    dante.loop = 0;
    dante.end = dante.x * dante.y * dante.x * dante.y;
    dante.maze[0][0] = '*';

    return (dante);
}

void fill_maze(struct coord dante)
{
    dante = init_values(dante);

    srand(time(NULL));
    while (dante.state != 1) {
        dante.random = random_gen(1000);
        dante.loop++;
        dante = check_direction_x(dante);
        dante = check_direction_y(dante);
        if (dante.loop >= 20) {
            dante = find_last_star(dante);
        }
        dante.ct_end++;
        if (dante.loop > 5000)
            dante.state = 1;
    }
    dante = fix_exit(dante);
    print_color(dante);
}