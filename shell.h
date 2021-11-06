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
int execute(char **, char **);
char *str_dup(char *);
unsigned long int str_len(char *);
char *mem_cpy(char *, const char *, size_t);
#endif
