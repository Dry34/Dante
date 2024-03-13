/*
** EPITECH PROJECT, 2023
** MY_H_
** File description:
** MY_H_
*/

#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

typedef struct maze_s {
    int x;
    int y;
    int perfect;
    char **maze;
} maze_t;

void create_maze_perfect(maze_t *maze);
void create_maze_imperfect(maze_t *maze);
void perfect(maze_t *maze_1);
void maze(maze_t *maze);
int main(int ac, char **av);
void init_struct(maze_t *m, int ac, char **av);
int error_handling(int ac, char **av);
int error_handling_3(int ac, char **av);
int error_handling_5(int ac, char **av, int i);
int error_handling_2(int ac, char **av);
int error_handling_4(int ac, char **av, int i);
int my_strcmp(char const *str1, char const *str2);
