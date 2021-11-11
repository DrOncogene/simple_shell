#include "shell.h"

/**
  * check_builtin - checks a passed string if it's a builtin func
  * @builtin: the name to be checked
  * Return: the index of builtin if found, -1 otherwise
  */
int check_builtin(char *builtin)
{
	char *built_ins[] = {"exit", "env", "setenv", "unsetenv",
		"cd", "alias", NULL};
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

/**
  * ch_dir - changes the cwd
  * @args: the arg vector
  * Return: nothing
  */
void ch_dir(char **args)
{
	char *prwd, *home, *cwd = NULL;
	size_t size;

	size = 0;
	cwd = getcwd(cwd, size);
	home = getenv("HOME");
	prwd = getenv("OLDPWD");
	if (prwd == NULL)
		prwd = cwd;

	if (args[1] != NULL)
	{
		if (str_cmp(args[1], "-") == 0)
		{
			setenv("PWD", prwd, 1);
			setenv("OLDPWD", cwd, 1);
			chdir(prwd);
		}
		else
		{
			setenv("PWD", args[1], 1);
			setenv("OLDPWD", cwd, 1);
			chdir(args[1]);
		}
	}
	else
	{
		setenv("PWD", home, 1);
		setenv("OLDPWD", cwd, 1);
		chdir(home);
	}
}
