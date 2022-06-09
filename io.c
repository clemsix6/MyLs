/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** io.c
*/

#include <dirent.h>
#include <stdlib.h>
#include "my.h"
#include "my_ls.h"

DIR *open_dir(char *dir_path)
{
    DIR *dir = opendir(dir_path);

    if (dir == NULL) {
        my_puterr("Directory not found.");
        exit(84);
    }
    return dir;
}

int count_files(char *dir_path)
{
    DIR *dir = opendir(dir_path);
    struct dirent *entry;
    int count = 0;

    while ((entry = readdir(dir)) != NULL) {
        count++;
    }
    closedir(dir);
    return count;
}

char get_last_char(char const *str)
{
    int i = 0;

    while (str[i] != 0)
        i++;
    return str[i - 1];
}

char **get_files(char *dir_path)
{
    char last_dir_path_char = get_last_char(dir_path);
    int count = count_files(dir_path);
    char **files_path = malloc(sizeof(char *) * (count + 1));
    DIR *dir = open_dir(dir_path);
    struct dirent *entry;
    int index = 0;

    while ((entry = readdir(dir)) != NULL) {
        files_path[index] = malloc(sizeof(char) * 256);
        if (last_dir_path_char != '/')
            my_strcat_in(dir_path, "/", files_path[index]);
        else
            my_strcpy(files_path[index], dir_path);
        my_strcat_in(files_path[index], entry->d_name, files_path[index]);
        index++;
    }
    files_path[index] = NULL;
    closedir(dir);
    return files_path;
}