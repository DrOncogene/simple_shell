#include "main.h"

/**
  * create_argv - creates an null terminated array of words from a string
  * @str: the command string
  * Description: uses space character as the delimiter and splits the
  * command string into words, saving the pointer to each word into
  * a malloc'ed array
  * Return: pointer to the array/arg vector
  */
char **create_argv(char *str)
{
	char **arr, *str_cpy, *path, *path_cpy;
	unsigned int n_words, i;

	if (str == NULL)
		return (NULL);

	str_cpy = strdup(str);
	n_words = 0;
	if (strtok(str_cpy, " "))
		n_words++;
	while (strtok(NULL, " "))
		n_words++;

	arr = malloc(sizeof(int) * 2 * (n_words + 1));

	path = strtok(str, " ");
	path_cpy = strdup(path);
	arr[0] = get_full_path(path_cpy);
	for (i = 1; i < n_words; i++)
	{
		path = strtok(NULL, " ");
		arr[i] = strdup(path);
	}

	arr[i] = NULL;
	free(str_cpy);
	free(path_cpy);

	return (arr);
}
