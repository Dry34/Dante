/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-thibaut1.tavernier
** File description:
** error_manage.c
*/

#include "../includes/solver.h"

int check_maze_consistency(solver_t *solver)
{
    int first_line_len = my_strlen(solver->maze[0]);
    for (int i = 1; i < solver->height; i++) {
        if (my_strlen(solver->maze[i]) != first_line_len) {
            solver->error = 84;
        }
    }
    return solver->error;
}

int error_management_statement(solver_t *s, position_t *pos, int i, int j)
{
    if (!(s->maze[i][j] == 'X' || s->maze[i][j] == '*')) {
        s->error = 84;
    }
    return s->error;
}

int error_management(solver_t *solver, position_t *pos)
{
    for (int i = 0; i < solver->height; i++) {
        for (int j = 0; j < solver->width; j++) {
            solver->error = error_management_statement(solver, pos, i, j);
        }
    }
    if (solver->pos_exit->x == 0 && solver->pos_exit->y == 0)
        solver->error = 84;
    if (solver->maze[solver->pos_exit->x][solver->pos_exit->y + 1] == 'X') {
        printf("no solution found");
        solver->error = 84;
    }
    if (solver->maze[0][0] != '*')
        solver->error = 84;
    if (solver->error == 84)
        return 84;
    return 0;
}
