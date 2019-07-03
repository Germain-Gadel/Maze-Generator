/*
** EPITECH PROJECT, 2019
** fill the maze
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include <dante.h>

struct coord test_final_star(struct coord dante)
{
    if (dante.maze[(dante.y) - 2][(dante.x) - 1] == '+' &&
        dante.maze[(dante.y) - 1][(dante.x) - 2] == '+')
        dante.maze[(dante.y) - 2][(dante.x) - 2] = 'X';
    return (dante);
}

struct coord fix_rand_exit(struct coord dante)
{
    int col = dante.x - 1;

    dante.maze[(dante.y) - 1][(dante.x) - 1] = '*';
    dante = test_final_star(dante);
    if (dante.maze[(dante.y) - 2][(dante.x) - 1] != '*' &&
        dante.maze[(dante.y) - 1][(dante.x) - 2] != '*') {
        while (dante.maze[(dante.y) - 1][col - 1] != '*' && col != 0) {
            dante.maze[(dante.y) - 1][col] = '*';
            col--;
        }
        dante.maze[(dante.y - 2)][col] = '*';
        dante.maze[(dante.y - 1)][col] = '*';
    }
    return (dante);
}

void fill_maze_rand(struct coord dante)
{
    int rand_x = 0;
    int rand_y = 0;
    float count = (dante.x * dante.y) * 1.5;
    int n = 0;

    dante.maze[0][0] = '*';
    dante.maze[(dante.y) - 1][(dante.x - 1)] = '*';
    srand(time(NULL));

    while (dante.i < count) {
        rand_x = rand() % dante.x;
        rand_y = rand() % dante.y;
        if (dante.maze[rand_y][rand_x] == 'X')
            dante.maze[rand_y][rand_x] = '*';
        dante.i += 1;
    }
    dante = fix_rand_exit(dante);
    for (n = 0; dante.maze[n] != NULL; n++) {
        printf("%s\n", dante.maze[n]);
    }
}