/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_strcat.c
*/

#include "../includes/lib.h"

char *my_strcat(char *dest, const char *src)
{
    size_t dest_len = my_strlen(dest);
    size_t i;
    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return dest;
}
