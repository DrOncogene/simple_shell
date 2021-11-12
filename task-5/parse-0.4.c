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
	unsigned int n_words, i;
	int prev_errno;

	if (comm == NULL)
		return (NULL);
	prev_errno = errno;
	comm_cpy = str_dup(comm);
	n_words = 0;
	if (strtok(comm_cpy, " "))
		n_words++;
	while (strtok(NULL, " "))
		n_words++;

	args = malloc(sizeof(int) * 2 * (n_words + 1));
	if (args == NULL)
	{
		printf("Unable to allocate memory\n");
		return (NULL);
	}
	path = strtok(comm, " ");
	path_cpy = str_dup(path);
	if (check_builtin(path_cpy) != -1)
		args[0] = path_cpy;
	else
	{
		args[0] = get_full_path(path_cpy);
		free(path_cpy);
	}

	for (i = 1; i < n_words; i++)
	{
		path = strtok(NULL, " ");
		args[i] = str_dup(path);
	}
	if (n_words > 0)
		args[i] = NULL;
	free(comm_cpy);
	errno = prev_errno;
	return (args);
}
