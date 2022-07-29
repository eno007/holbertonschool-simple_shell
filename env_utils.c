#include "shell.h"
/**
 * print_dlistint - print a doubly-linked list
 * @h: pointer to the head of the list
 *
 * Return: list length
 */
extern char **environ;
void print_env(char **environ)
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
/*
 * print_dlistint - print a doubly-linked list
 * @h: pointer to the head of the list
 *
 * Return: list length
 *
char *get_env(char *str, list_t *env)
{
	int j = 0, cs = 0;

	while (env != NULL)
	{
		j = 0;
		while ((env->var)[j] == str[j]) 
			j++;
		if (str[j] == '\0' && (env->var)[j] == '=')
			break;
		env = env->next;
	}

	while (str[cs] != '\0')
		cs++;
	cs++;
	return (c_strdup(env->var, cs));
}*/
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

