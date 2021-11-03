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
	m = 0;

	m = getline(buff, &n, stdin);

	/*if nothing is entered and 'enter' button pressed. Restart*/
	if (m == 1)
		execvp(args[0], args);
	/* if the input is piped, the next iteration, m is 0 */
	else if (m < 1)
		exit(1);
	/* this is to handle EOF when ctrl-D is pressed after input*/
	if (m > 1 && *(*buff + m - 1) != '\n')
		*(*buff + m) =  '\0';
	else
		*(*buff + m - 1) = '\0';

	return (m);
}

/**
  * free_av_buff - frees the arg vector created and malloc'ed buffer
  * @buff: the input buffer
  * @av: the arg vector generated from user input
  * Return: nothing
  */
void free_av_buff(char *buff, char **av)
{
	int i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}

	free(av);
	free(buff);
}
