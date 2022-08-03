#include "shell.h"
void _exit_(char **command)
{
	int _status = 0;

	if (command[1] == NULL)
	{
		free(command);
		exit(EXIT_SUCCESS);
	}
	_status = _atoi(command[1]);
	free(command);
	exit(_status);
}

