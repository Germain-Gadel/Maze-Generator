/*
** EPITECH PROJECT, 2019
** random fill the maze
** File description:
** by Quentin Lavieville and Germain Gadel
*/

#include "dante.h"

int rand_else(int num)
{
    if (num >= 500 && num < 750)
        return 2;
    if (num >= 750)
        return 3;
    return (-1);
}