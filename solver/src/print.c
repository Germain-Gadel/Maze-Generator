/*
** EPITECH PROJECT, 2018
** Print BSQ
** File description:
** by Quentin Lavieville
*/

#include "dante.h"
#include <stdio.h>
#include <stdlib.h>

void printmap(char **map, int bckn)
{
    int i = 0;

    while (i != bckn) {
        printf("%s\n", map[i]);
        i++;
    }
}

char **freemap(char **map, int bckn)
{
    int i = 0;

    while (i != bckn) {
        free(map[i]);
        i++;
    }
    free(map);
    return (map);
}