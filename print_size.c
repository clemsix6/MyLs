/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** print_size.c
*/

#include <sys/stat.h>
#include "my.h"

void print_size(struct stat file_stat)
{
    my_put_nbr((int)(file_stat.st_size));
    my_putchar('\t');
}
