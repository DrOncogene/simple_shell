#include "shell.h"

/**
  * str_tok - breaks a string into tokens using a delimiter specified
  * @str: the string
  * @delim: the delimeter
  * Description: splits up a string by putting '\0' where a delimiter
  * character is found and returning the pointer to the start of the
  * word that was found. Works exactly like the standard lib strtok
  * Return: pointer to the next token/word
  */
char *str_tok(char *str, char *delim)
{
	static char *pos;
	char *word;
	unsigned long int len_delim, i, j;

	if ((str == NULL || *str == 0) && pos == NULL)
		return (NULL);
	else if (str == NULL && pos != NULL)
		str = pos;
	else if (str != NULL && pos != NULL)
		pos = NULL;

	if (delim == NULL || *delim == 0)
		return (str);

	len_delim = str_len(delim);

	while (*str == *delim && *str != 0)
	{
		for (i = 0; i < len_delim; i++)
		{
			if (*(str + i) != *(delim + i))
				break;
		}
		if (i == len_delim)
		{
			str += i;
			pos = str;
		}
	}

	j = 0;
	word = str;
	while (*(str + j) != *delim)
	{
		j++;
		if (*(str + j) == *delim)
		{
			for (i = 0; i < len_delim; i++)
			{
				if (*(str + j + i) != *(delim + i))
					break;
			}
			if (i == len_delim)
			{
				*(str + j) = '\0';
				str += i + j;
				pos = str;
				break;
			}
		}
		else if (*(str + j) == 0)
		{
			pos = NULL;
			break;
		}
	}

	if (*word == 0)
		return (NULL);
	else
		return (word);
}

/**
  * str_tok_r - re-entrant version of str_tok
  * @str: the string
  * @delim: the delimeter
  * @save_ptr: the pointer to the location of the next token
  * Description: splits up a string by putting '\0' where a delimiter
  * character is found and returning the pointer to the start of the
  * word that was found. Works exactly like the standard lib strtok_r
  * Return: pointer to the next token/word
  */
char *str_tok_r(char *str, char *delim, char **save_ptr)
{
	char *word;
	unsigned long int len_delim, i, j;

	if ((str == NULL || *str == 0) && *save_ptr == NULL)
		return (NULL);
	else if (str == NULL && *save_ptr != NULL)
		str = *save_ptr;
	else if (str != NULL && *save_ptr != NULL)
		*save_ptr = NULL;

	if (delim == NULL || *delim == 0)
		return (str);

	len_delim = str_len(delim);

	while (*str == *delim && *str != 0)
	{
		for (i = 0; i < len_delim; i++)
		{
			if (*(str + i) != *(delim + i))
				break;
		}
		if (i == len_delim)
		{
			str += i;
			*save_ptr = str;
		}
	}

	j = 0;
	word = str;
	while (*(str + j) != *delim)
	{
		j++;
		if (*(str + j) == *delim)
		{
			for (i = 0; i < len_delim; i++)
			{
				if (*(str + j + i) != *(delim + i))
					break;
			}
			if (i == len_delim)
			{
				*(str + j) = '\0';
				str += i + j;
				*save_ptr = str;
				break;
			}
		}
		else if (*(str + j) == 0)
		{
			*save_ptr = str + j;
			break;
		}
	}

	if (*word == 0)
		return (NULL);
	else
		return (word);
}
