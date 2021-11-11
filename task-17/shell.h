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
#include <errno.h>
#include "strings.h"
#include "alias.h"
#include "builtins.h"
#include "inputs.h"

extern char **environ;
char *logical_and(char *);
char *logical_or(char *);
int len_array(char **);
char *get_alias(char *);
char **parse_command(char *, char *);
char *get_full_path(char *);
char *find_path(char *, char *, char **);
int execute(char **, char **);
void exec_builtin(int, char **);
#endif
