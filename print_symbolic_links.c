/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** print_symbolic_links.c
*/

#include <sys/stat.h>
#include "my.h"

void print_symbolic_links(struct stat file_stat)
{
    my_put_nbr((int)(file_stat.st_nlink));
    my_putchar('\t');
}