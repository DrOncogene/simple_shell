#include "shell.h"

/**
  * main - a simple shell interpreter
  * @ac: arg count
  * @av: arg vector
  * @env: the evironment
  * Return: never returns until a kill signal is sent
  */
int main(int ac __attribute__((unused)), char **av, char **env)
{
	char **args, *buff;
	ssize_t flag;

	flag = 1;
	while (flag > 0)
	{
		if (isatty(STDIN_FILENO))
			printf("my_shell$ ");

		buff = NULL;
		flag = get_input(&buff, av);

		args = parse_command(buff);
		free(buff);
		if (execute(args, env) == -1)
			perror(av[0]);

		free_args(args);
	}

	return (0);
}
