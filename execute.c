#include "shell.h"

/**
  * execute - executes a program in a child process with the arguments passed
  * @args: the argument vector
  * @env: the environment to pass to the program
  * Return: 0 if success, -1 otherwise
  */
int execute(char **args, char **env)
{
	pid_t child;
	int status;
	struct stat st;

	errno = 0;
	if (stat(args[0], &st) == -1)
		return (-1);

	errno = 0;
	child = fork();
	if (child == -1)
	{
		return (-1);
	}

	if (child == 0)
	{
		errno = 0;
		if (execve(args[0], args, env) == -1)
			_exit(-1);
	}
	else
	{
		errno = 0;
		wait(&status);
	}
	return (0);
}
