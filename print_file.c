/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** print_file.c
*/

#include <sys/stat.h>
#include "my_ls.h"
#include "my.h"

void print_file(char *file_path, char *file_name, char *options)
{
    struct stat file_stat = get_file_stat(file_path);

    if (file_name[0] == '.' && !contain_option(options, 'a'))
        return;
    if (contain_option(options, 'l')) {
        print_permissions(file_stat);
        print_symbolic_links(file_stat);
        print_owners(file_stat);
        print_size(file_stat);
        print_date(file_stat);
    }
    my_putstr(file_name);
    my_putchar('\n');
}
