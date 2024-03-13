/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-thibaut1.tavernier
** File description:
** check_around.c
*/

#include "../includes/solver.h"

bool check_around(solver_t *s, int row, int col, int count)
{
    if (row < 0 || row >= s->height || col < 0 || col >= s->width)
        return true;
    if (s->maze_copy[row][col] == -1
    || count > s->maze_copy[row][col] && s->maze_copy[row][col] != 0)
        return true;
    return false;
}

bool check_valid(solver_t *s, int row, int col)
{
    if (row < 0 || row >= s->height || col < 0 || col >= s->width)
        return false;
    if (s->maze_copy[row][col] == -1)
        return false;
    return true;
}
