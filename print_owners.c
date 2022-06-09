/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** print_owners.c
*/

#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include "my.h"

void print_owners(struct stat file_stat)
{
    struct passwd *pw = getpwuid(file_stat.st_uid);
    struct group  *gr = getgrgid(file_stat.st_gid);

    my_putstr(pw->pw_name);
    my_putchar('\t');
    my_putstr(gr->gr_name);
    my_putchar('\t');
}