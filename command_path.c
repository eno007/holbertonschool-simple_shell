#include "shell.h"

/**
 * command_path - entry point
 * @cmd: string
 * Return: copy of cmd, NULL if any errors
 */
char *command_path(char *cmd)
{
	char *path = _strdup(_getenv("PATH"));
	char *token = strtok(path, ":");
	char *path_array[100];
	char *new_path = NULL;
	int len;
	struct stat buf;

	new_path = malloc(sizeof(char) * 100);
	if (_getenv("PATH")[0] == ':')
		if (stat(cmd, &buf) == 0)
			return (_strdup(cmd));


	len = 0;
	while (token != NULL)
	{
		path[i] = token;
		i++;
		token = strtok(NULL, ":");
	}
	path_array[i] = NULL;

	len = 0;
	while (path_array[i] != NULL)
	{
		_strcpy(new_path, path_array[i]);
		_strcpy(new_path, "/");
		_strcpy(new_path, cmd);
		_strcpy(new_path, "\0");
		i++;

		if (stat(new_path, &buf) == 0)
		{
			free(path);
			return (new_path);
		}
		else
			new_path[0] = 0;
	}
	free(path);
	free(new_path);

	if (stat(cmd, &buf) == 0)
		return (_strdup(cmd));

	return (NULL);
}
