/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_putchar.c
*/

#include "../includes/lib.h"

int my_putchar(char c)
{
    if (write(1, &c, 1) == -1)
        return 84;
}
