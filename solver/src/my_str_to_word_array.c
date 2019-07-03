/*
** EPITECH PROJECT, 2019
** by Quentin Lavieville
** File description:
** transform a string into a double array
*/

#include "dante.h"

char **malloc_fill_arr(char *str, int cnt, char sep)
{
    char **arr;
    int i = 0;
    int mem = 0;
    int memreal = 0;
    int space = -1;
    int buff = 0;

    arr = malloc(sizeof(char *) * (cnt + 1));
    if (!arr)
        exit (84);
    while (i != cnt) {
        buff = mem - space;
        mem = my_little_len(str, mem, &space, sep);
        memreal = (mem - buff) - space;
        arr[i] = malloc(sizeof(char) * (memreal + 2));
        if (!arr)
            exit (84);
        i++;
        mem += 1;
    }
    return (arr);
}

char **fill_arr(char *str, char **arr, int cnt, char sep)
{
    int i = 0;
    int j = 0;
    int x = 0;

    while (i != cnt) {
        while (str[x] != sep  && str[x] != '\t' && str[x] != '\0') {
            arr[i][j] = str[x];
            j++;
            x++;
        }
        arr[i][j] = '\0';
        j = 0;
        i++;
        x++;
    }
    arr[i] = NULL;
    return (arr);
}

char **my_strtwa(char *str, char sep)
{
    char **arr;
    int cnt = 0;

    if (str == NULL)
        return (NULL);
    str = fixstr(str, sep);
    cnt = cntspace(str, sep);
    arr = malloc_fill_arr(str, cnt, sep);
    arr = fill_arr(str, arr, cnt, sep);
    free(str);
    return (arr);
}