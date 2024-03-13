/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_strcmp.c
*/

#include "../includes/lib.h"

int my_strcmp(char const *s1 , char const *s2)
{
    int size_s1 = 0;
    int size_s2 = 0;
    int i = 0;
    if (s1 == NULL || s2 == NULL)
        return 84;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i = i + 1;
    size_s1 = s1[i];
    size_s2 = s2[i];
    if (size_s1 == size_s2)
        return (0);
    return (size_s1 - size_s2);
}
