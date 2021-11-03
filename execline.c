#include "shell.h"

/**
 * exec_args - A funtion that executes a command in a child process
 * @argv: argument
 * @pars: string received
 * @env: enviroment variable
 * @path: the path
 * @buff: the buffer
 *
 */
void exec_args(char *buff, char **argv, char **pars, char **env, paths_t *path)
{
	int status;
	pid_t pid, tpid;
	char *text_parsed;

	/**
	 * Forking a child
	 */
	pid = fork();

	if (pid == 0)
	{
		text_parsed = check_path(pars, path);
		if (execve(text_parsed, pars, env) == -1)
		{
			write(STDERR_FILENO, argv[0], _strlen(argv[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, "1", 1);
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, text_parsed, _strlen(text_parsed));
			write(STDERR_FILENO, ": not found\n", 13);
			free(buff);
			free_list(path);
		}
		exit(0);
	}
	else
	{
		do {
			tpid = wait(&status);
		} while (tpid != pid);
	}
	free(buff);
}
