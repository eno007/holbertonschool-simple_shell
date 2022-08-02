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

	// cmd = "ls";

	// printf("%s\n", path);

	new_path = malloc(sizeof(char) * 100);
	if (_getenv("PATH")[0] == ':')
		if (stat(cmd, &buf) == 0)
			return (_strdup(cmd));


	len = 0;
	while (token != NULL)
	{
		path_array[len] = token;
		len++;
		token = strtok(NULL, ":");
	}
	path_array[len] = NULL;

/*	for (len = 0; path_array[len]; len++)
		printf("%s\n", path_array[len]);
*/
	for (len = 0; path_array[len]; len++)
	{
		_strcpy(new_path, path_array[len]);
		_strcat(new_path, "/");
		_strcat(new_path, cmd);
		_strcat(new_path, "\0");
		
	//	printf("%s\n", new_path);

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
