#include "shell.h"

/*
 *
 *
 */

int command_read(char *s, size_t __attribute__((unused))characters)
{
	char *token = NULL;
	char *path_array[100];
	int i = 0;

	if (_strcmp(s, "exit") == 0)
		return (2);
	if (_strcmp(s, "env") == 0)
		return (_printenv());
	token = _strtok(s," ");
	while (token)
	{
		path_array[i++] = token;
		token = _strtok(NULL, " ");
	}
	path_array[i] = '\0';
	return (execute(path_array));
}
/*
 *
 *
 */
int execute()
{
}
