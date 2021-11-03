#ifndef SHELL_H
#define SHELL_H
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

ssize_t get_input(char **, char **);
int check_builtin(char *);
void print_env(char **);
void exec_builtin(int, char **);
void free_av_buff(char *, char **);
char **parse_command(char *);
char *get_full_path(char *);
char *find_path(char *, char *, char **);
int execute(char **, char **);
#endif
