/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-thibaut1.tavernier
** File description:
** solver.h
*/

#pragma once

#include "lib.h"

typedef struct position_s {
    int x;
    int y;
} position_t;

typedef struct solver_s {
    int best;
    int best_x;
    int best_y;
    position_t *pos_entry;
    position_t *pos_exit;
    position_t *pos_actuel;
    position_t *coord_fill;
    int width;
    int height;
    int length;
    int error;
    int perfect;
    char **maze;
    int **maze_copy;
} solver_t;

int **load_maze_in_int(solver_t *solver, char *filepath);
void maze_in_int_statement(solver_t *solver, int **maze_copy, int i, int j);

char **load_maze_in_mem(solver_t *solver, char *filepath);
int print_map_char(solver_t *solver);
void print_map_char_statement(solver_t *solver, int i, int j);
position_t *find_last_star(solver_t *solver, position_t *pos);
position_t *last_star_statement(solver_t *sol, position_t *pos, int i, int j);
void print_map_int(solver_t *solver, position_t *pos);
void print_int_statement(solver_t *solver, int i, int j);

bool check_valid(solver_t *s, int row, int col);
bool check_around(solver_t *s, int row, int col, int count);

int solving_map(solver_t *solver, position_t *pos);
void resolving_map(solver_t *solver, int row, int col);
void check_resolve_statement_2(solver_t *solver, int row, int col);
void check_resolve_statement_1(solver_t *solver, int row, int col);
void flood_fill(solver_t *s, int row, int col, int count);

int error_management(solver_t *solver, position_t *pos);
int error_management_statement(solver_t *s, position_t *pos, int i, int j);
int check_maze_consistency(solver_t *solver);
