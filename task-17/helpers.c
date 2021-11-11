#include "shell.h"

/**
  * len_array - computes the length of an array of strings
  * @array: the string array
  * Return: length of the array
  */
int len_array(char **array)
{
	int len;

	len = 0;
	while (array[len])
	{
		len++;
	}

	return (len);
}

/**
  * get_alias - finds and return the value of an alias if one exists
  * @name: the alias
  * Return: the value of the alias, if found or NULL otherwise
  */
char *get_alias(char *name)
{
	char *value, *value2, *alias, *alias_h, *alias_cpy, *next_name, *save_ptr;

	alias = find_alias(name, get_aliases());
	alias_h = alias;
	while (alias)
	{
		alias_h = alias;

		alias_cpy = str_dup(alias);
		strtok_r(alias_cpy, "=", &save_ptr);
		next_name = str_dup(strtok_r(NULL, "=", &save_ptr));
		alias = find_alias(next_name, get_aliases());
		free(next_name);
		free(alias_cpy);
	}

	if (alias_h)
	{
		alias_cpy = str_dup(alias_h);
		strtok_r(alias_cpy, "=", &save_ptr);
		value = str_dup(strtok_r(NULL, "=", &save_ptr));
		value2 = str_dup(strtok_r(value, "'", &save_ptr));
		free(value);
		free(alias_cpy);
		free(name);
		return (value2);
	}
	else
		return (name);
}
