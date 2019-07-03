/*
** EPITECH PROJECT, 2019
** main file for generator for dante
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    struct coord dante;

    if (ac > 4 || ac < 3)
        return (84);
    dante.x = atoi(av[1]);
    dante.y = atoi(av[2]);
    if (dante.x <= 1 || dante.y <= 1)
        return (84);
    generate(dante, av[3]);
    return (0);
}