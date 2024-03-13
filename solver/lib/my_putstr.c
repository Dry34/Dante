/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_putstr.c
*/

#include "../includes/lib.h"

int my_putstr(char const *str)
{
    for (int i = 0 ; str[i] != 0 ; i++) {
        my_putchar(str[i]);
    }
    return (0);
}
