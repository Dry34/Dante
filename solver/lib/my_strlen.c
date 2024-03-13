/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_strlen.c
*/

#include "../includes/lib.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int my_strlen_1_line(char const *str)
{
    int i = 0;
    while (str[i] != '\n') {
        i++;
    }
    return i;
}

int my_strlen_height_counter(char const *str)
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            j++;
        }
        i++;
    }
    return j;
}
