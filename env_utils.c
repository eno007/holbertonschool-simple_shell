#include "shell.h"
/**
 * _printenv  - print environ global variable
 * @argc: argument count
 * @argv: argument vector
 * @p_env: var to print
 * Return: 0
 */

int _printenv(void)
{
	char *str = environ[0];
	unsigned int size = _strlen(str);
	int i;

	while (str[i])
	{
		write(1, str, size);
		write(1, "\n", 1);
		str = environ[++i];
	}
	return (0);
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
	return (NULL);
}
