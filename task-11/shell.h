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

extern char **environ;
ssize_t get_input(char **, char **);
int check_builtin(char *);
void exit_shell(char **);
void print_env(char **);
void exec_builtin(int, char **);
void free_args(char **);
void free_args_exit(char **, int);
char **parse_command(char *);
char *get_full_path(char *);
char *find_path(char *, char *, char **);
int execute(char **, char **);
int str_cmp(char *s1, char *s2);
unsigned long int str_len(char *s);
char *mem_cpy(char *dest, const char *src, size_t n);
char *str_dup(char *s);
char *str_tok(char *str, char *delim);
char *str_tok_r(char *str, char *delim, char **save_ptr);
#endif