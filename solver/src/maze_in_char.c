/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-thibaut1.tavernier
** File description:
** maze_in_char.c
*/

#include "../includes/solver.h"

char **load_maze_in_mem(solver_t *solver, char *filepath)
{
    char **buffer = malloc(solver->length * sizeof(char *));
    for (int i = 0; i != solver->length; i++) {
        buffer[i] = malloc(solver->length * sizeof(char));
    }
    if (buffer == NULL)
        solver->error = 84;
    for (int i = 0, k = 0; i < solver->height; i++) {
        for (int j = 0; j < solver->width; j++, k++) {
            buffer[i][j] = filepath[k];
        }
        k++;
    }
    return buffer;
}

void print_map_char_statement(solver_t *solver, int i, int j)
{
    if (solver->maze[i][j] == 'o')
        printf("%c", solver->maze[i][j]);
    else
        printf("%c", solver->maze[i][j]);
}

int print_map_char(solver_t *solver)
{
    for (int i = 0; i != solver->height; i++) {
        for (int j = 0; j != solver->width; j++) {
            print_map_char_statement(solver, i, j);
        }
        if (i != solver->height - 1) {
            printf("\n");
        }
    }
}
