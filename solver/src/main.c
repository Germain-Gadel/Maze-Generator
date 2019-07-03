/*
** EPITECH PROJECT, 2018
** Main BSQ
** File description:
** by Quentin Lavieville
*/

#include "dante.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void read_file(int fd, char *buffer, int size, int color_state)
{
    size = read(fd, buffer, (size - 1));
    buffer[size] = '\0';
    putinarray(buffer, color_state);
}

void open_file(char *file, int size, int color_state)
{
    char buffer[size];
    int fd = 0;

    fd = open(file, O_RDONLY);
    if (fd == -1)
        exit(84);
    read_file(fd, buffer, size, color_state);
    close(fd);
}

void getmap(char *file, char *color)
{
    int filesize;
    struct stat size;
    int color_state = 0;

    if (color[0] == '-' && color[1] == 'c')
        color_state = 1;
    stat(file, &size);
    filesize = size.st_size;
    open_file(file, filesize, color_state);
}

int main(int ac, char **av)
{
    if (ac < 2 || ac > 3)
        return (84);
    else if (ac == 3)
        getmap(av[1], av[2]);
    else
        getmap(av[1], "empty");
    return (0);
}