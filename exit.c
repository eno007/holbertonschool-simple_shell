#include "shell.h"
void _exit(char **command)
{
	int _status = 0;

	if (command[1] == NULL)
	{
		free_dp(command);
		exit(EXIT_SUCCESS);
	}
	_status = _atoi(command[1]);
	free_dp(command);
	exit(_status);
}

