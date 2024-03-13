/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_isdigit.c
*/

#include "../includes/lib.h"

int my_isdigit(char const * str)
{
    for (int i = 0 ; str[i] != 0 ; i++) {
        if ((str[i] >= '0' && str[i] <= '9')) {
        } else {
            return 0;
        }
    }
    return 1;
}
