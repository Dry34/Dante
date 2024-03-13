/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-thibaut1.tavernier
** File description:
** maze_exit.c
*/

#include "../includes/solver.h"

position_t *last_star_statement(solver_t *sol, position_t *pos, int i, int j)
{
    if (sol->maze[i][j] == '*') {
        sol->pos_exit->x = i;
        sol->pos_exit->y = j;
    }
}

position_t *find_last_star(solver_t *solver, position_t *pos)
{
    for (int i = 0; i < solver->height; i++) {
        for (int j = 0; j < solver->width; j++) {
            last_star_statement(solver, pos, i, j);
        }
    }
    return solver->pos_exit;
}
