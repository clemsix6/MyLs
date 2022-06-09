/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** print_permissions.c
*/

#include "my.h"
#include <sys/stat.h>

void print_permissions(struct stat file_stat)
{
    my_putstr((S_ISDIR(file_stat.st_mode)) ? "d" : "-");
    my_putstr((file_stat.st_mode & S_IRUSR) ? "r" : "-");
    my_putstr((file_stat.st_mode & S_IWUSR) ? "w" : "-");
    my_putstr((file_stat.st_mode & S_IXUSR) ? "x" : "-");
    my_putstr((file_stat.st_mode & S_IRGRP) ? "r" : "-");
    my_putstr((file_stat.st_mode & S_IWGRP) ? "w" : "-");
    my_putstr((file_stat.st_mode & S_IXGRP) ? "x" : "-");
    my_putstr((file_stat.st_mode & S_IROTH) ? "r" : "-");
    my_putstr((file_stat.st_mode & S_IWOTH) ? "w" : "-");
    my_putstr((file_stat.st_mode & S_IXOTH) ? "x" : "-");
    my_putchar('\t');
}