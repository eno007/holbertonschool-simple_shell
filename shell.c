#include "shell.h"

/**
 * main - function that checks if an open file descriptor is
 * associated with terminal device
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: 0
 */

int main(int __attribute__ ((unused))argc, char *argv[])
{
	char *line = NULL;
	size_t buffer = 0;
	ssize_t chars = 0;

	name = argv[0];
	while (1)
	{
		if (isatty(0) == 1)
			write(1, "$ ", 2);
		chars = getline(&line, &buffer, stdin);
		if (chars == -1)
		{
			if (isatty(0) == 1)
				write(1, "\n", 1);
			break;
		}
		if (line[chars - 1] == '\n')
			line[chars - 1] = '\0';
		if (*line == '\0')
			continue;
		if (command_read(line, chars) == 2)
			break;
	}
	free(line);
	return (0);
}

/**
 * execute - function that executes commands
 * @cmd_arr: pointer to array of commands
 * Return: 0, -1, 3
 */
int execute(char *cmd_arr[])
{
	char *execute_path;
	char *cmd = NULL;
	pid_t pid;
	int status, execve_status;

	cmd = cmd_arr[0];
	execute_path = command_path(cmd);
	if (execute_path == NULL)
	{
		write(2, name, _strlen(name));
		write(2, ": ", 2);
		write(2, cmd, _strlen(cmd));
		write(2, ": not found\n", 12);

		return (3);
	}
	pid = fork();
	if (pid < 0)
	{
		write(STDERR_FILENO, ERR_FORK, _strlen(ERR_FORK));
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		execve_status = execve(execute_path, cmd_arr, environ);
		if (execve_status == -1)
			return (-1);
	}
	else
		wait(&status);

	return (0);
}

/**
 * command_read - function that reads commands
 * @str: pointer to string
 * @characters: character os a string
 * Return: status code
 */

int command_read(char *str, size_t __attribute__((unused))characters)
{
	char *token = NULL;
	char *cmd_arr[100];
	int i;

	if (_strcmp(str, "exit") == 0)
		return (2);

	if (_strcmp(str, "env") == 0)
		return (_printenv());

	token = strtok(str, " "), i = 0;
	while (token)
	{
		cmd_arr[i++] = token;
		token = strtok(NULL, " ");
	}
	cmd_arr[i] = NULL;
	free(token);
	return (execute(cmd_arr));
}
