/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** By Germain Gadel
*/

#include "dante.h"

int my_strlen(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}

int my_strcmp(char const *str1, char const *str2)
{
    int i = 0;

    if (str1 == NULL || str2 == NULL || my_strlen(str1) != my_strlen(str2))
        return (1);
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return (1);
        i++;
    }
    return (0);
}