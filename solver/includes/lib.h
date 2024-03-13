/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-minishell1-alan.trebugeais
** File description:
** lib.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <dirent.h>
#include <signal.h>
#include <errno.h>
#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

#pragma once

void skip(char **p);
char *my_strcpy(char * dest, char const *src);
void str_to_word_array(char *str, char **arr);
int my_putchar(char c);
int my_strlen(char const *str);
int my_strlen_1_line(char const *str);
int my_strlen_height_counter(char const *str);
int my_putstr(char const *str);
void my_put_nbr(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcat(char *dest, const char *src);
int my_isspace(char c);
char *my_strdup( char const *src);
void my_calloc(char **str, int size);
int my_getnbr(char const *str);
int my_isalpha(char const *str);
int my_isalpha_first_char(char const *str);
int my_isalpha_char(char const *str);
int my_isdigit(char const * str);
