/*
** EPITECH PROJECT, 2019
** by Quentin Lavieville
** File description:
** my_strtwa
*/

#include "dante.h"

int my_little_len(char *str, int cnt, int *space, char sep)
{
    while (str[cnt] != sep && str[cnt] != '\0' && str[cnt] != '\t') {
        cnt++;
    }
    *(space) += 1;
    return (cnt);
}

char *malloc_dest(char *dest, char *str)
{
    dest = malloc(sizeof(char) * (strlen(str) + 1));
    if (!dest)
        exit(84);
    return (dest);
}

char *fixstr(char *str, char sep)
{
    int i = 0;
    int state = 0;
    int cnt = 0;
    char *dest = NULL;

    dest = malloc_dest(dest, str);
    while (str[cnt] != '\0') {
        if (str[cnt] == sep || str[cnt] == '\t') {
            if (state == 0)
                dest[i++] = str[cnt];
            state = 1;
        } else {
            dest[i++] = str[cnt];
            state = 0;
        }
        cnt++;
    }
    dest[i] = '\0';
    return (dest);
}

int cntspace(char *str, char sep)
{
    int cnt = 0;
    int space = 0;

    while (str[cnt] != '\0') {
        if (str[cnt] == sep || str[cnt] == '\t')
            space++;
        cnt++;
    }
    space++;
    return (space);
}