/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_strcpy.c
*/

#include "../includes/lib.h"

char *my_strcpy(char * dest, char const *src)
{
    int i = 0;
    for (;src[i] != 0 ; i++) {
        dest[i] = src[i];
    }
    dest[i] = 0;
    return dest;
}
