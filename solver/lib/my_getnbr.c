/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_getnbr.c
*/

#include "../includes/lib.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    for ( ; (str[i] < '0' || str[i] > '9') && str[i] != 0 ; i++) {
    }
    for (int f = 0 ; str[i + f] <= '9' && str[i + f] >= '0' ; f++) {
        nb += str[i + f] - '0';
        nb *= 10;
    }
    nb /= 10;
    i--;
    for ( ; str[i] == '-' ; i--) {
        nb *= -1;
    }
    return (nb);
}
