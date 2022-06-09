/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** print_date.c
*/

#include <sys/stat.h>
#include <time.h>
#include "my.h"

void print_month(int id)
{
    switch (id) {
        case 1: my_putstr("jan"); break;
        case 2: my_putstr("feb"); break;
        case 3: my_putstr("mar"); break;
        case 4: my_putstr("avr"); break;
        case 5: my_putstr("may"); break;
        case 6: my_putstr("jun"); break;
        case 7: my_putstr("jul"); break;
        case 8: my_putstr("aug"); break;
        case 9: my_putstr("sep"); break;
        case 10: my_putstr("oct"); break;
        case 11: my_putstr("nov"); break;
        case 12: my_putstr("dec"); break;
    }
}

void print_date(struct stat file_stat)
{
    time_t t = file_stat.st_mtime;
    struct tm lt;

    localtime_r(&t, &lt);
    print_month(lt.tm_mon + 1);
    my_putchar('\t');
    my_put_nbr(lt.tm_mday);
    my_putchar('\t');
    my_put_nbr(lt.tm_hour);
    my_putchar(':');
    my_put_nbr(lt.tm_min);
    my_putchar('\t');
}