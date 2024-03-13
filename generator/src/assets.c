/*
** EPITECH PROJECT, 2023
** asset
** File description:
** generator
*/

#include "../includes/my.h"

int my_strcmp(char const *str1, char const *str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return (1);
        i++;
    }
    if (str1[i] != str2[i])
        return (1);
    return (0);
}
