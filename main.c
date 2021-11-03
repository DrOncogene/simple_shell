#include "shell.h"

/**
 *main - a unix interpreter
 *Function: displays a prompt and gets user input and execute them.
 *
 *Return: On success 1.
 */

int main(void)
{
	char *buffer;
	char **args;
	int status = 1;

	while (status)
	{
		printf("cisfun$ ");
		buffer = get_line();
		args = split_line(buffer);
		status = exec_line(args);
	}

	free(buffer);
	free(args);

	return (1);
}
