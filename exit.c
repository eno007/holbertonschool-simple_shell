#include "shell.h"
void _exit_()
{
	int _status = 0;
	char **command = NULL;
	unsigned int i = 1;

	if (command[i] == NULL)
	{
		free(command);
		exit(EXIT_SUCCESS);
	}
	_status = _atoi(command[i]);
	free(command);
	exit(_status);
}

