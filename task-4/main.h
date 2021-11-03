#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>

ssize_t get_input(char **, char **);
int check_builtin(char *);
void print_env(char **);
void exec_builtin(int, char **);
void free_av_buff(char *, char **);
char **create_argv(char *);
char *get_full_path(char *);
char *check_path(char *, char *, char **);
int execute(char **, char **);
#endif
