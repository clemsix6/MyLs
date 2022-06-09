/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** my_ls.h
*/

#ifndef MYLS_MY_LS_H
#define MYLS_MY_LS_H

#include <stdbool.h>
#include <sys/stat.h>

char **get_files(char *dir_path);
void my_ls(char *dir_path, char *options);
char get_type(struct stat file_stat);
void print_date(struct stat file_stat);
void print_size(struct stat file_stat);
void print_owners(struct stat file_stat);
void print_symbolic_links(struct stat file_stat);
void print_permissions(struct stat file_stat);
void print_file(char *file_path, char *file_name, char *options);
bool contain_option(char *options, char c);
struct stat get_file_stat(char *file_path);
void check_options(char *options);

#endif //MYLS_MY_LS_H
