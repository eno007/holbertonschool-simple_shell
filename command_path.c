#include "shell.h"

/**
 * command_path - function that finds command path
 * @cmd: pointer to string of commands
 * Return: a copy of command path or NULL for error
 */
char *command_path(char *cmd)
{
	int length = 0;
	char *path = _strdup(_getenv("PATH"));
	char *tokenize = strtok(path, ":");
	char *path_array[100];
	char *new_path = NULL;
	struct stat buffer;

	new_path = malloc(sizeof(char) * 100);
	if (_getenv("PATH")[0] == ':')
		if (stat(cmd, &buffer) == 0)
			return (_strdup(cmd));
	while (tokenize != NULL)
	{
		path_array[length] = tokenize;
		length++;
		tokenize = strtok(NULL, ":");
	}
	path_array[length] = NULL;

	for (length = 0; path_array[length]; length++)
	{
		_strcpy(new_path, path_array[length]);
		_strcat(new_path, "/");
		_strcat(new_path, cmd);
		_strcat(new_path, "\0");
		if (stat(new_path, &buffer) == 0)
		{
			free(path);
			return (new_path);
		}
		else
			new_path[0] = 0;
	}
	free(path);
	free(new_path);
	if (stat(cmd, &buffer) == 0)
		return (_strdup(cmd));
	return (NULL);
}
