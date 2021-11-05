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
void free_args(char **);
char **parse_command(char *);
char *get_full_path(char *);
char *find_path(char *, char *, char **);
int execute(char **, char **);
int str_cmp(char *s1, char *s2);
unsigned long int str_len(char *s);
char *mem_cpy(char *dest, const char *src, size_t n);
char *str_dup(char *s);
#endif