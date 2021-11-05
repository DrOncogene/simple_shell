#include "shell.h"

ssize_t mygetline(char **buff, size_t *n)
{
	static size_t offset;
	static int counter;
	size_t line_size, pos;
	static ssize_t m;
	static char *input;

	line_size = 0;
	if (offset == 0)
	{
		input = malloc(sizeof(char) * 1024);
		m = read(STDIN_FILENO, input, 1024);
	}

	if (m > 0)
	{
		if (input[m - 1] == '\n')
		{
			input[m] = '\0';
			line_size++;
		}
		else
		{
			input[m] = '\n';
			input[m + 1] = '\0';
		}

		if (counter > 0)
			offset++;

		pos = offset;
		while (input[offset] != '\n')
		{
			line_size++;
			offset++;
		}
		if (*n <= line_size)
			*buff = malloc(sizeof(char) * (line_size + 2));

		if (*buff == NULL)
		{
			printf("Error: memory allocation failed");
			return (-1);
		}
		if (counter == 0)
			mem_cpy(*buff, input, line_size + 1);
		else
			mem_cpy(*buff, (input + pos), line_size + 1);

		mem_cpy((*buff + line_size + 1), "\0", 1);
	}
	else
		return (0);

	if (offset + 1 == str_len(input))
	{
		free(input);
		offset = 0;
	}
	else
		counter++;

	return (line_size);
}
