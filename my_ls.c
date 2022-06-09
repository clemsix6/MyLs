/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** my_ls.c
*/

#include <sys/stat.h>
#include <stdlib.h>
#include "my_ls.h"
#include "my.h"

char *get_file_name(char *file_path, char *dir_path)
{
    int file_path_len = my_strlen(file_path);
    int dir_path_len = my_strlen(dir_path);
    char *name = malloc(sizeof(char) * file_path_len - dir_path_len + 1);

    for (int i = dir_path_len; i < file_path_len; i++)
        name[i - dir_path_len] = file_path[i];
    name[file_path_len - dir_path_len] = 0;
    return name;
}

void print_total(char **files)
{
    struct stat file_stat;
    int total = -8;

    for (int i = 0; files[i] != NULL; i++) {
        file_stat = get_file_stat(files[i]);
        total += (int)file_stat.st_blocks / 2;
    }
    my_putstr("total ");
    my_put_nbr(total);
    my_putchar('\n');
}

void check_for_file(char *dir_path)
{
    struct stat file_stat = get_file_stat(dir_path);
    char type = get_type(file_stat);

    if (type == 'f') {
        my_putstr(dir_path);
        my_putchar('\n');
        exit(0);
    }
}

void print_name(char *dir_path)
{
    my_putchar('\n');
    my_putstr(dir_path);
    my_putchar(':');
    my_putchar('\n');
}

void recursive(char **files, char *dir_path, char *options)
{
    struct stat file_stat;
    char *name;
    int len;

    for (int i = 0; files[i] != NULL; i++) {
        name = get_file_name(files[i], dir_path);
        len = my_strlen(name);
        if (name[1] == '.' || name[len] == '.')
            continue;
        file_stat = get_file_stat(files[i]);
        if (get_type(file_stat) == 'd')
            my_ls(files[i], options);
    }
}

void my_ls(char *dir_path, char *options)
{
    char **files;
    char *file_name;

    check_for_file(dir_path);
    files = get_files(dir_path);
    if (contain_option(options, 'R'))
        print_name(dir_path);
    if (contain_option(options, 'l'))
        print_total(files);
    for (int i = 0; files[i] != NULL; i++) {
        file_name = get_file_name(files[i], dir_path);
        print_file(files[i], file_name, options);
        free(file_name);
    }
    if (contain_option(options, 'R'))
        recursive(files, dir_path, options);
    for (int i = 0; files[i] != NULL; i++)
        free(files[i]);
    free(files);
}