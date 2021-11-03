#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
  * main - a simple shell interpreter
  * @ac: arg count
  * @av: arg vector
  * @env: the evironment
  * Return: never returns until a kill signal is sent
  */
int main(int ac __attribute__((unused)), char **av, char **env)
{
	char **argv, *buff;
	ssize_t m;

	m = 1;
	while (m > 0)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "my_shell$ ", 10);

		buff = NULL;
		m = get_input(&buff, av);

		argv = create_argv(buff);
		if (execute(argv, env) == -1)
			perror(av[0]);

		free(buff);
		free(argv);
	}

	return (0);
}

/**
  * get_input - gets the user input command and save it in buff
  * @buff: the buffer
  * @av: the arg vector
  * Return: number of character entered
  */
ssize_t get_input(char **buff, char **av)
{
	size_t n;
	ssize_t m;

	n = 0;
	m = 0;

	m = getline(buff, &n, stdin);

	/*if nothing is entered and 'enter' button pressed. Restart*/
	if (m == 1)
		execvp(av[0], av);
	/* if the input is piped, the next iteration, m is 0 */
	else if (m < 1)
		exit(1);
	/* this is to handle EOF when ctrl-D is pressed after input*/
	if (m > 1 && *(*buff + m - 1) != '\n')
	{
		printf("\n");
		*(*buff + m) =  '\0';
	}
	else
		*(*buff + m - 1) = '\0';

	return (m);
}
