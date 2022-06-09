/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** main.c
*/

#include <stdlib.h>
#include "my.h"
#include "my_ls.h"

int get_options_count(int ac, char **av)
{
    int count = 0;

    for (int i = 0; i < ac; i++) {
        if (av[i][0] != '-')
            continue;
        for (int j = 1; av[i][j] != 0; j++) {
            count++;
        }
    }
    return count;
}


char *parse_options(int ac, char **av)
{
    int options_count = get_options_count(ac, av);
    char *options = malloc(sizeof(char) * (options_count + 1));
    int index = 0;

    for (int i = 0; i < ac; i++) {
        if (av[i][0] != '-')
            continue;
        for (int j = 1; av[i][j] != 0; j++) {
            options[index] = av[i][j];
            index++;
        }
    }
    options[index] = 0;
    return options;
}

char *clean_dir_path(char *dir_path)
{
    int len = my_strlen(dir_path);
    char *new_path;

    if (dir_path[len - 1] == '/') {
        new_path = malloc(len + 1);
        new_path[len] = 0;
    } else {
        new_path = malloc(len + 2);
        new_path[len] = '/';
        new_path[len + 1] = 0;
    }
    for (int i = 0; dir_path[i] != 0; i++)
        new_path[i] = dir_path[i];
    return new_path;
}

char *get_dir_path(int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        if (av[i][0] != '-')
            return clean_dir_path(av[i]);
    }
    return "./";
}

int main(int ac, char **av)
{
    char *options = parse_options(ac, av);
    char *dir_path = get_dir_path(ac, av);

    check_options(options);
    my_ls(dir_path, options);
    if (!contain_option(options, 'R'))
        free(dir_path);
    free(options);
}
