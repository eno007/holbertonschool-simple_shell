#include "shell.h"
/**
 * _printenv  - print environ global variable
 * @argc: argument count
 * @argv: argument vector
 * @p_env: var to print
 * Return: 0
 */
extern char **environ;
void print_env(char **environ)

int _printenv(int argc, char *argv[], char * p_env[])
{
	char **env_ptr;
	unsigned int size;

	env_ptr = environ;
	while (*env_ptr)
	{
		size =  _strlen(*env_ptr);
		write(STDOUT_FILENO, *env_ptr, size);
		write(STDOUT_FILENO, "\n", 1);
		env_ptr++;
	}
}

/**
 * _getenv - searches for environment string pointed by name
 * @name: string containing the name of the requested variable
 *
 * Return: 0
 */
char *_getenv(const char *name)
{
	int i, j;
	char *value;

	if (!name)
		return (NULL);
	for (i = 0; environ[i]; i++)
	{
		j = 0;
		if (name[j] == environ[i][j])
		{
			while (name[j])
			{
				if (name[j] != environ[i][j])
					break;

				j++;
			}
			if (name[j] == '\0')
			{
				value = (environ[i] + j + 1);
				return (value);
			}
		}
	}
	return (0);
}

int main()
{
	printf("%s\n", _getenv("HOME"));
	return 0;
}
