/*
** EPITECH PROJECT, 2021
** MyLs
** File description:
** my_strcat_in.c
*/

int my_strlen(char const *str);

void my_strcat_in(char const *str1, char const *str2, char *dest)
{
    int str1_len = my_strlen(str1);
    int str2_len = my_strlen(str2);

    for (int i = 0; i < str1_len; i++)
        dest[i] = str1[i];
    for (int i = 0; i < str2_len; i++)
        dest[i + str1_len] = str2[i];
    dest[str1_len + str2_len] = 0;
}