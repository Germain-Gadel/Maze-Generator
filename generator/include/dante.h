/*
** EPITECH PROJECT, 2019
** dante
** File description:
** by Quentin Lavieville;
*/

#ifndef DANTE_H_
#define DANTE_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct coord
{
    int i;
    int x;
    int j;
    int y;
    char **maze;
    int direction;
    int status;
    int state;
    int loop;
    int draw;
    long long int ct_end;
    long long int end;
    int random;
    int back;
};

struct coord generate_maze(struct coord, char *);
char **free_double(char **);
struct coord generate(struct coord, char *);
void fill_maze(struct coord);
int my_strcmp(char const *, char const *);
void fill_maze_rand(struct coord);
struct coord find_last_star(struct coord);
void print_color(struct coord);
int check_down_limits(struct coord, int);
int down_is_i_null(struct coord, int);
int down_is_null(struct coord);
int down_is_j_zero(struct coord, int);
int down_j_is_zero(struct coord);
int left_is_i_zero(struct coord);
int left_is_j_one(struct coord, int);
int left_izero_and_jo(struct coord);
int left_inull_and_jo(struct coord);
int left_inot_and_jo(struct coord);
int check_left_limits(struct coord, int);
int left_else(struct coord);
int check_right_limits(struct coord, int);
int right_is_i_null(struct coord);
int right_is_i_zero(struct coord, int);
int right_j_else(struct coord);
int right_j_max(struct coord);
struct coord find_all(struct coord);
int check_up_limits(struct coord, int);
int up_is_i_null(struct coord, int);
int up_j_max(struct coord);
int up_is_j_zero(struct coord, int);
struct coord find_which_top(struct coord);
int up_j_is_zero(struct coord);
struct coord top(struct coord);
struct coord top_right(struct coord);
struct coord top_left(struct coord);
struct coord check_i_minus(struct coord);
struct coord check_i_plus(struct coord);
struct coord right(struct coord);
struct coord find_which_right(struct coord);
struct coord check_i_plus(struct coord);
struct coord bottom_right(struct coord);
struct coord bottom(struct coord);
struct coord bottom_left(struct coord);
struct coord find_which_bottom(struct coord);
struct coord check_j_minus(struct coord);
struct coord check_j_plus(struct coord);
struct coord left(struct coord);
struct coord find_which_left(struct coord);
int rand_else(int);
struct coord fix_exit(struct coord);

#endif /* DANTE_H_ */
