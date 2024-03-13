/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-thibaut1.tavernier
** File description:
** maze_in_int.c
*/

#include "../includes/solver.h"

void maze_in_int_statement(solver_t *solver, int **maze_copy, int i, int j)
{
    if (solver->maze[i][j] == '*')
        maze_copy[i][j] = 0;
    if (solver->maze[i][j] == 'X')
        maze_copy[i][j] = -1;
    if (i < 0 || i >= solver->height || j < 0 || j >= solver->width)
        maze_copy[i][j] = -1;
}

int **load_maze_in_int(solver_t *solver, char *filepath)
{
    int **maze_copy = malloc(solver->length * sizeof(int *));
    for (int i = 0; i < solver->length; i++) {
        maze_copy[i] = malloc(solver->width * sizeof(int));
    }
    for (int i = 0; i < solver->height; i++) {
        for (int j = 0; j < solver->width; j++) {
            maze_in_int_statement(solver, maze_copy, i, j);
        }
    }
    return maze_copy;
}

void print_int_statement(solver_t *solver, int i, int j)
{
    if (solver->maze_copy[i][j] == -1)
        printf("X");
    else
        printf("%d,", solver->maze_copy[i][j]);
}

void print_map_int(solver_t *solver, position_t *pos)
{
    for (int i = 0; i < solver->height; i++) {
        for (int j = 0; j < solver->width; j++) {
            print_int_statement(solver, i, j);
        }
        printf("\n");
    }
}
