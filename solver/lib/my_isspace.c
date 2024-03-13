/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_isspace.c
*/

#include "../includes/lib.h"

int my_isspace(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' ||
    c == '\v' || c == '\f' || c == '\r');
}
