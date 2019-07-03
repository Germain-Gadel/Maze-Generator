/*
** EPITECH PROJECT, 2019
** dante
** File description:
** by Quentin Lavieville
*/

#ifndef DANTE_H_
#define DANTE_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

struct solver
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
    int stuck;
};

void putinarray(char *, int);
char **freemap(char **, int);
void printmap(char **, int);
char **my_strtwa(char *, char);
int cntspace(char *, char);
char *fixstr(char *, char);
int my_little_len(char *, int, int *, char);
char *malloc_dest(char *, char *);
struct solver solve_maze(struct solver);
struct solver find_next_star(struct solver);
struct solver start_find(struct solver);
struct solver find_which_right(struct solver);
struct solver find_which_left(struct solver);
struct solver find_which_bottom(struct solver);
struct solver find_which_top(struct solver);
struct solver find_all(struct solver);
struct solver right(struct solver);
struct solver check_j_plus(struct solver);
struct solver left(struct solver);
struct solver check_j_minus(struct solver);
struct solver bottom_left(struct solver);
struct solver bottom(struct solver);
struct solver bottom_right(struct solver);
struct solver check_i_plus(struct solver);
struct solver top(struct solver);
struct solver top_right(struct solver);
struct solver top_left(struct solver);
struct solver check_i_minus(struct solver);
int rand_else(int num);
void print_color(struct solver, int);
void test_char_print(struct solver, int, int, int);
struct solver find_last_plus(struct solver);
struct solver find_which_right_bt(struct solver);
struct solver find_which_left_bt(struct solver);
struct solver find_which_bottom_bt(struct solver);
struct solver find_which_top_bt(struct solver);
struct solver find_all_bt(struct solver);
struct solver right_bt(struct solver);
struct solver check_j_plus_bt(struct solver);
struct solver left_bt(struct solver);
struct solver check_j_minus_bt(struct solver);
struct solver bottom_left_bt(struct solver);
struct solver bottom_bt(struct solver);
struct solver bottom_right_bt(struct solver);
struct solver check_i_plus_bt(struct solver);
struct solver top_bt(struct solver);
struct solver top_right_bt(struct solver);
struct solver top_left_bt(struct solver);
struct solver check_i_minus_bt(struct solver);

#endif /* DANTE_H_ */
