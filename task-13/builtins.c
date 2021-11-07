#include "shell.h"

/**
  * check_builtin - checks a passed string if it's a builtin func
  * @builtin: the name to be checked
  * Return: the index of builtin if found, -1 otherwise
  */
int check_builtin(char *builtin)
{
	char *built_ins[] = {"exit", "env", "setenv", "unsetenv", NULL};
	int i;

	i = 0;
	while (built_ins[i])
	{
		if (str_cmp(builtin, built_ins[i]) == 0)
			return (i);

		i++;
	}

	return (-1);
}

/**
  * exec_builtin - execute a given builtin func
  * @index: index of the function
  * @args: the arg vector
  * Return: nothing
  */
void exec_builtin(int index, char **args)
{
	void (*builtin_ptrs[])(char **) = {print_env,
		env_func, env_func};

	if (index == 0)
		free_args_exit(args);
	else
		builtin_ptrs[index - 1](args);
}

/**
  * print_env - prints the environment
  * @args: the args vector
  * Description: uses the 'extern char **environ' global
  * variable. Handles the env builtin func
  * Return: nothing
  */
void print_env(char **args __attribute__((unused)))
{
	unsigned int i;

	i = 0;
	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
/**
  * env_func - sets or unsets environment variables
  * @args: the arg vector
  * Return: nothing
  */
void env_func(char **args)
{
	int status;

	if (str_cmp(args[0], "setenv") == 0)
	{
		if (args[1] == NULL || args[2] == NULL)
		{
			printf("Usage: setenv VARIABLE VALUE\n");
			return;
		}
	
		if (getenv(args[1]) == NULL)
			status = setenv(args[1], args[2], 0);
		else
			status = setenv(args[1], args[2], 1);
	}
	else
	{
		if (args[1] == NULL)
		{
			printf("Usage: unsetenv VARIABLE\n");
			return;
		}

		status = unsetenv(args[1]);
	}
	if (status == -1)
		perror("Error");
}
