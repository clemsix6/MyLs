/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** contain_option.c
*/

#include <stdbool.h>

bool contain_option(char *options, char c)
{
    for (int i = 0; options[i] != 0; i++) {
        if (options[i] == c)
            return true;
    }
    return false;
}