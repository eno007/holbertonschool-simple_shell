#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/*
 * comment
 */
int execute(int *forked)
{
	int status;
	pid_t child_pid;
	pid_t my_pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	if (*forked != 5)
	{
		child_pid = fork();
		int status;

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
			*forked += 1;
			execute(forked);
		}
	}
	my_pid = getpid();

	return (0);
}
/*
 * comment
 */ 
int main(void)
{
	int forked = 0;

	execute(&forked);
	return (0);
}
