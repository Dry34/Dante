/*
** EPITECH PROJECT, 2023
** maz
** File description:
** maze
*/

#include "../includes/my.h"

void maze(maze_t *maze)
{
    for (int i = 0; i < maze->y - 1; i += 2) {
        for (int j = 0; j != maze->x; j++) {
            maze->maze[i][j] = '*';
            maze->maze[0][0] = '*';
        }
    }
    if (maze->perfect == 1)
        for (int i = 1; i < maze->y - 1; i += 2)
            maze->maze[i][rand() % maze->x] = '*';
    else
        for (int i = 1; i < maze->y - 1; i += 2) {
            maze->maze[i][rand() % maze->x] = '*';
            maze->maze[i][rand() % maze->x] = '*';
        }
    if (maze->y % 2 == 0) {
        maze->maze[maze->y - 1][maze->x - 1] = '*';
    }
}

void perfect(maze_t *maze_1)
{
    if (maze_1->y % 2 == 1)
        for (int j = 0; j != maze_1->x; j++) {
            maze_1->maze[maze_1->y - 1][j] = '*';
        }
    maze(maze_1);
}

void create_maze_imperfect(maze_t *maze)
{
    perfect(maze);
    for (int i = 0; i != maze->y - 1; i++)
        printf("%s\n", maze->maze[i]);
    printf("%s", maze->maze[maze->y - 1]);
}

void create_maze_perfect(maze_t *maze)
{
    perfect(maze);
    for (int i = 0; i != maze->y - 1; i++)
        printf("%s\n", maze->maze[i]);
    printf("%s", maze->maze[maze->y - 1]);
}
