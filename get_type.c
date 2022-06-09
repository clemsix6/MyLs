/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** get_type.c
*/

#include <sys/stat.h>

char get_type(struct stat file_stat)
{
    switch (file_stat.st_mode & S_IFMT) {
        case S_IFBLK:
            return 'b';
        case S_IFCHR:
            return 'c';
        case S_IFDIR:
            return 'd';
        case S_IFIFO:
            return 'p';
        case S_IFLNK:
            return 'l';
        case S_IFSOCK:
            return 's';
        case S_IFREG:
            return 'f';
        default:
            return '.';
    }
}