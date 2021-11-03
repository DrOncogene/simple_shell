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
	ssize_t m;

	m = 1;
	while (m > 0)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "my_shell$ ", 10);

		buff = NULL;
		m = get_input(&buff, av);

		args = parse_command(buff);
		if (execute(args, env) == -1)
			perror(av[0]);

		free_av_buff(buff, args);
	}

	return (0);
}
