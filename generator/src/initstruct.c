/*
** EPITECH PROJECT, 2023
** inistruct
** File description:
** dante
*/

#include "../includes/my.h"

void init_struct(maze_t *m, int ac, char **av)
{
    if (my_strcmp(av[3], "imperfect") == 0)
        m->perfect = 0;
    else if (my_strcmp(av[3], "perfect") == 0)
        m->perfect = 1;
    else if (ac == 3)
        return;
    m->x = atoi(av[1]);
    m->y = atoi(av[2]);
    m->maze = malloc(sizeof(char *) * (m->y));
    for (int i = 0; i != m->y; i++)
        m->maze[i] = malloc(sizeof(char) * (m->x));
    for (int i = 0; i != m->y; i++) {
        for (int j = 0; j != m->x; j++) {
            m->maze[i][j] = 'X';
        }
    }
}
