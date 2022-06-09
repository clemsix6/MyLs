/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** get_file_stat.c
*/

#include "my.h"
#include <sys/stat.h>
#include <stdlib.h>

struct stat get_file_stat(char *file_path)
{
    struct stat file_stat;
    int ret_code;

    ret_code = stat(file_path, &file_stat);
    if (ret_code == -1) {
        my_puterr("File not found\n");
        exit(84);
    }
    return file_stat;
}