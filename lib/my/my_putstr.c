/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** putstr
*/

#include <unistd.h>

int my_strlen(char const *);

int my_putstr(char const *str)
{
    int len = my_strlen(str);

    write(1, str, len);
    return len;
}