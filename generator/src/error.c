/*
** EPITECH PROJECT, 2023
** error
** File description:
** gene dante
*/

#include "../includes/my.h"

int error_handling_4(int ac, char **av, int i)
{
    for (int j = 0; av[i][j] != '\0'; j++) {
        if (av[i][j] < '0' || av[i][j] > '9') {
            write(2, "Invalid number of arguments\n", 27);
            return (1);
        }
    }
}

int error_handling_2(int ac, char **av)
{
    int x = atoi(av[1]);
    int y = atoi(av[2]);

    for (int i = 1; i != ac; i++)
        return (error_handling_4(ac, av, i));
    if (y == 0 || x == 0) {
        write(2, "Invalid number of arguments\n", 27);
        return (1);
    }
    return (0);
}

int error_handling_5(int ac, char **av, int i)
{
    for (int j = 0; av[i][j] != '\0'; j++) {
        if (av[i][j] < '0' || av[i][j] > '9') {
            write(2, "Invalid number of arguments\n", 27);
            return (1);
        }
    }
}

int error_handling_3(int ac, char **av)
{
    int x = atoi(av[1]);
    int y = atoi(av[2]);

    for (int i = 1; i != ac - 1; i++)
        return (error_handling_5(ac, av, i));
    if (y == 0 || x == 0) {
        write(2, "Invalid number of arguments\n", 27);
        return (1);
    }
    if (my_strcmp(av[3], "perfect") == 0) {
        write(2, "Invalid number of arguments\n", 27);
        return (1);
    }
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac == 3)
        return (error_handling_2(ac, av));
    else
        return (error_handling_3(ac, av));
}
