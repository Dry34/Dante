/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-thibaut1.tavernier
** File description:
** solver.c
*/

#include "../includes/solver.h"

void flood_fill(solver_t *s, int row, int col, int count)
{
    s->maze_copy[row][col] = count;
    if (!(check_around(s, row, col - 1, count))) {
        flood_fill(s, row, col - 1, count + 1);
    }
    if (!(check_around(s, row, col + 1, count))) {
        flood_fill(s, row, col + 1, count + 1);
    }
    if (!(check_around(s, row - 1, col, count))) {
        flood_fill(s, row - 1, col, count + 1);
    }
    if (!(check_around(s, row + 1, col, count))) {
        flood_fill(s, row + 1, col, count + 1);
    }
}

void check_resolve_statement_1(solver_t *solver, int row, int col)
{
    if (check_valid(solver, row, col - 1)
    && solver->best > solver->maze_copy[row][col - 1]) {
        solver->best = solver->maze_copy[row][col - 1];
        solver->best_x = row;
        solver->best_y = col - 1;
    }
    if (check_valid(solver, row, col + 1)
    && solver->best > solver->maze_copy[row][col + 1]) {
        solver->best = solver->maze_copy[row][col + 1];
        solver->best_x = row;
        solver->best_y = col + 1;
    }
}

void check_resolve_statement_2(solver_t *solver, int row, int col)
{
    if (check_valid(solver, row - 1, col)
    && solver->best > solver->maze_copy[row - 1][col]) {
        solver->best = solver->maze_copy[row - 1][col];
        solver->best_x = row - 1;
        solver->best_y = col;
    }
    if (check_valid(solver, row + 1, col)
    && solver->best > solver->maze_copy[row + 1][col]) {
        solver->best = solver->maze_copy[row + 1][col];
        solver->best_x = row + 1;
        solver->best_y = col;
    }
}

void resolving_map(solver_t *solver, int row, int col)
{
    solver->best = solver->maze_copy[row][col];
    solver->best_x = -1;
    solver->best_y = -1;
    solver->maze[row][col] = 'o';
    check_resolve_statement_1(solver, row, col);
    check_resolve_statement_2(solver, row, col);
    if (solver->best_x != -1 && solver->best_y != -1) {
        resolving_map(solver, solver->best_x, solver->best_y);
    }
}

int solving_map(solver_t *solver, position_t *pos)
{
    flood_fill(solver, solver->pos_actuel->x, solver->pos_actuel->y, 0);
    solver->maze_copy[solver->pos_exit->x][solver->pos_exit->y] = 0;
    resolving_map(solver, solver->pos_entry->x, solver->pos_entry->y);
    print_map_char(solver);
    return 1;
}
