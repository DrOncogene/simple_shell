#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>

/**
 *struct path_s - singly linked list fot path
 *@path: information part of the path
 *@next: pointer to the next node
 */

typedef struct path_s
{
  char *path;
  struct path_s *next;
  char *buffer;
}
  paths_t;

void shell(char **argv, char *envp[]);
void exec_args(char *, char **, char **, char **, paths_t *);
paths_t *get_path(char **env);
paths_t *create_struct(paths_t **head, char *str);
void parse_text(char *str, char **parsed);
void parse_text_path(char *str, char **parsed);
void func_exit(char *buffer, char **parsed, paths_t *p_path_string);
void free_list(paths_t *head);
void free_parsed(char **parsed);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
int _strlen(char *s);
char *check_path(char **parsed, paths_t *h);
void call_func(char *, char **, char **, char **, paths_t *);
char *str_concat(char *s1, char *s2);

/**
 * get_paths 
*/
char *find_path(char *filename, char *tmp, char *er)
char *read_dir(char *er, struct dirent *s, char *fil, int l, char *fp, char *t)
char *save_path(char *tmp, char *path)

#endif
