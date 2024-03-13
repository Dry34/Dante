/*
** EPITECH PROJECT, 2023
** make && ./solver/solver ./solver/maze.txt
** File description:
** solver
*/

#include "../includes/solver.h"

int init_variables(solver_t *solver, char *filepath, position_t *pos)
{
    solver->length = my_strlen(filepath);
    solver->width = my_strlen_1_line(filepath);
    solver->height = my_strlen_height_counter(filepath) + 1;
    solver->maze = load_maze_in_mem(solver, filepath);
    solver->maze_copy = load_maze_in_int(solver, filepath);
    solver->error = 0;
    solver->pos_entry->x = 0;
    solver->pos_entry->y = 0;
    solver->pos_exit = find_last_star(solver, pos);
    solver->pos_actuel->x = solver->pos_exit->x;
    solver->pos_actuel->y = solver->pos_exit->y;
    return 0;
}

int start_solver(solver_t *solver, char *filepath, position_t *pos)
{
    int fd = open(filepath, O_RDONLY);
    struct stat sb;
    stat(filepath, &sb);
    if (fd == -1)
        return 84;
    char *copy = malloc(sizeof(char *) * (sb.st_size + 1));
    copy[sb.st_size] = '\0';
    read(fd, copy, sb.st_size);
    init_variables(solver, copy, pos);
    solver->error = error_management(solver, pos);
    if (solver->error == 84)
        return 84;
    solving_map(solver, pos);
    close(fd);
    return 0;
}

int main(int argc, char **argv)
{
    solver_t solver;
    position_t pos;
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        return 84;
    solver.pos_entry = malloc(sizeof(position_t));
    solver.pos_exit = malloc(sizeof(position_t));
    solver.pos_actuel = malloc(sizeof(position_t));
    solver.error = 0;
    if (argc > 2 || argc < 2)
        solver.error = 84;
    if (argc == 2) {
        start_solver(&solver, argv[1], &pos);
    }
    if (solver.error == 84) {
        return 84;
    }
    return 0;
}
