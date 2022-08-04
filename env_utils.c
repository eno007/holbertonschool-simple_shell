#include "shell.h"

/**
* _str_n_cmp - Function that compares n elements of a string
* @s1: first string
* @s2: second string
* @n: long int to measure the number of elements in a string
* Return: return 1 if s1 > s2, -1 if s1 < s2, or 0
*/

int _str_n_cmp(const char *s1, const char *s2, size_t n)
{
	char c1;
	char c2;

	while (n--)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0' || c1 != c2)
		{
			if (c1 > c2)
				return (1);
				else if (c1 < c2)
					return (-1);
				else
					return (0);
		}
	}
	return (0);
}

/**
* _getenv - function that gets environmental variables
* @name: ponter to function
* Return: No return
*/

char *_getenv(char *name)
{
	int i = 0;
	int len = strlen(name);

	while (environ[i] != NULL)
	{
		if (_str_n_cmp(environ[i], name, _strlen(name)) == 0)
			return (&environ[i][len]);
		i++;
	}
	return (NULL);
}

/**
* _printenv - function that prints environmental variables
* Return:  0
*/

int _printenv(void)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, (const void *) environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}
