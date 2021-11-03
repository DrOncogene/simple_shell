#include "shell.h"

/**
 *get_line - Read entire line from stream into buffer
 *Return: Buffer containing line read.
 */

void sighandler(int sig_num)
{
  (void)sig_num;
  write(STDOUT_FILENO, "\n$", _strlen("\n$"));
  fflush(stdout);
}

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
