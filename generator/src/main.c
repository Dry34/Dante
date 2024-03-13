/*
** EPITECH PROJECT, 2023
** dante
** File description:
** generator
*/

#include "../includes/my.h"

int main(int ac, char **av)
{
    maze_t *m = malloc(sizeof(maze_t));

    if (ac < 3 || ac > 4) {
        write(2, "Invalid number of arguments\n", 27);
        return 84;
    }
    if (error_handling(ac, av))
        return 84;
    init_struct(m, ac, av);
    if (m->perfect == 1)
        create_maze_perfect(m);
    else if (m->perfect == 0)
        create_maze_imperfect(m);
    else 
        return 84;
    return 0;
}
