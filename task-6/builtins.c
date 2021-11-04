#include "shell.h"

/**
  * check_builtin - checks a passed string if it's a builtin func
  * @builtin: the name to be checked
  * Return: the index of builtin if found, -1 otherwise
  */
int check_builtin(char *builtin)
{
	char *built_ins[] = {"exit", "env", NULL};
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
	void (*builtin_ptrs[])(char **) = {exit_shell, print_env};

	builtin_ptrs[index](args);
}

/**
  * exit_shell - exit builtin function. Quits the shell
  * @args: the args vector
  * Return: nothing
  */
void exit_shell(char **args)
{
	printf("exiting shell...\n");
	free_args_exit(args);
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
