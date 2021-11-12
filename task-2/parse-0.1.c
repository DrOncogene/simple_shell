#include "shell.h"

/**
  * parse_command - creates an null terminated array of words from a string
  * @comm: the command string
  * Description: uses space character as the delimiter and splits the
  * command string into words, saving the pointer to each word into
  * a malloc'ed array
  * Return: pointer to the array/arg vector
  */
char **parse_command(char *comm)
{
	char **args, *comm_cpy, *path, *path_cpy;

	if (comm == NULL)
		return (NULL);

	comm_cpy = str_dup(comm);

	args = malloc(sizeof(char *) * 2);
	if (args == NULL)
	{
		printf("Unable to allocate memory\n");
		return (NULL);
	}

	path = strtok(comm_cpy, " ");
	if (path == NULL)
		path = " ";
	path_cpy = str_dup(path);
	args[0] = str_dup(path_cpy);
	args[1] = NULL;
	if (strtok(NULL, " ") != NULL)
	{
		free(args[0]);
		args[0] = strdup(" ");
	}

	free(comm_cpy);
	free(path_cpy);

	return (args);
}
