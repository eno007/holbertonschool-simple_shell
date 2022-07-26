#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>
int main(void)
{
	int status;
	int forked = 0;
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	while (forked < 5)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		else if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
		}
		else
		{
			wait(&status);
			forked++;
		}
	}
	return (0);
}
