/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_strdup.c
*/

#include "../includes/lib.h"

char *my_strdup( char const *src)
{
    char *temp = malloc(sizeof(char) * my_strlen(src)+1);
    int i = 0;
    int compteur = my_strlen(src);
    while (src[i] != '\0') {
        temp[i] = src[i];
        i++;
    }
    temp[compteur] = '\0';
    return temp;
}
