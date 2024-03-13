/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_calloc.c
*/

#include "../includes/lib.h"

void my_calloc(char **str, int size)
{
    *str = malloc(sizeof(char) * size);
    for (int i = 0; i < size; i++)
        (*str)[i] = '\0';
}
