#include "shell.h"

/**
  * get_input - gets the user input command and save it in buff
  * @buff: the buffer
  * @args: the arg vector
  * Return: number of character entered
  */
ssize_t get_input(char **buff, char **args)
{
	size_t n;
	ssize_t m;

	n = 0;
	m = mygetline(buff, &n);

	/*if nothing is entered and 'enter' button pressed. Restart*/
	if (m == 1)
		execvp(args[0], args);
	/* if the input is piped or EOF, the next iteration, m is 0 */
	else if (m < 1)
	{
		free(*buff);
		/*if input is from the terminal, restart*/
		if (isatty(STDIN_FILENO))
			execvp(args[0], args);
		/*if it's piped, exit*/
		exit(errno);
	}
	/**
	  * this is to handle EOF when ctrl-D is pressed
	  * after input since there'll be no newline
	 */
	if (m > 1 && *(*buff + m - 1) != '\n')
		*(*buff + m) =  '\0';
	else
	/*this overrides the newline at the end from getline()*/
		*(*buff + m - 1) = '\0';

	return (m);
}

/**
  * free_args - frees the arg vector created by 'parse_command'
  * @args: the arg vector generated from user input
  * Return: nothing
  */
void free_args(char **args)
{
	int i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}

	free(args);
}
