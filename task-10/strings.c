#include "shell.h"

/**
  * str_cmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: neg, 0, or pos int if s1 is less than, matches or greater than s2
  */
int str_cmp(char *s1, char *s2)
{
	size_t i, j;
	int res;

	i = j = 0;
	do {
		if (s1[i] == s2[j])
		{
			res = 0;
			j++;
		}
		else
		{
			res = s1[i] - s2[j];
			break;
		}
	} while (s1[++i]);

	return (res);
}

/**
  * mem_cpy - copies a given number of char from src to dest
  * @dest: destination
  * @src: source
  * @n: number of chars to copy
  * Return: dest or NULL if dest or src is NULL
  */
char *mem_cpy(char *dest, const char *src, size_t n)
{
	size_t i;

	if (dest == NULL || src == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
  * str_dup - duplicates a string
  * @s: the string
  * Return: pointer to the duplicate or NULL if s is NULL
  */
char *str_dup(char *s)
{
	char *dup;

	if (s == NULL)
		return (NULL);

	dup = malloc(sizeof(char) * (str_len(s) + 1));
	mem_cpy(dup, s, str_len(s) + 1);

	return (dup);
}

/**
  * str_len - finds the length of a string
  * @s: the string
  * Return: length of s, -1 if s is NULL
  */
unsigned long int str_len(char *s)
{
	if (s == NULL)
		return (-1);
	if (*s == '\0')
		return (0);

	return (str_len(s + 1) + 1);
}

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
