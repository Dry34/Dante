/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** my_put_nbr.c
*/

#include "../includes/lib.h"

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
    }
    my_putchar('0' + nb % 10);
}
