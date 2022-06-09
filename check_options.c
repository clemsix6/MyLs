/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** check_options.c
*/

#include "my.h"
#include "my_ls.h"
#include <stdlib.h>

void check_options(char *options)
{
    char supported[] = "lRa";
    int options_count = my_strlen(options);

    for (int i = 0; i < options_count; i++) {
        if (!contain_option(supported, options[i]))
            exit(84);
    }
}