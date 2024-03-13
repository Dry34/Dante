/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_isalpha.c
*/

#include "../includes/lib.h"

int my_isalpha(char const *str)
{
    for (int i = 0 ; str[i] != 0 ; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z')
        || (str[i] >= 'A' && str[i] <= 'Z')
        || (str[i] >= '0' && str[i] <= '9')
        || (str[i] == '_')) {
        } else {
            return 0;
        }
    }
    return 1;
}

int my_isalpha_first_char(char const *str)
{
    for (int i = 0 ; str[i] != 0 ; i++) {
        if ((str[0] >= 'a' && str[0] <= 'z')
        || (str[0] >= 'A' && str[0] <= 'Z')
        || (str[0] >= '0' && str[0] <= '9')
        || (str[0] == '_')) {
        } else {
            return 0;
        }
    }
    return 1;
}

int my_isalpha_char(char const *str)
{
    for (int i = 0 ; str[i] != 0 ; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z')
        || (str[i] >= 'A' && str[i] <= 'Z')
        || (str[i] >= '0' && str[i] <= '9')
        || (str[i] == '_')) {
        } else {
            return 0;
        }
    }
    return 1;
}
