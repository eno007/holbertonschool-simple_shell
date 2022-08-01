#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *cmd = "/usr/bin/ls";
	char *argv[] = {"ls", NULL};
	char *envv[] = {NULL};

	printf("%s", cmd);
	printf("\n");

	if (execve(cmd, argv, envv) == -1)
	{
		perror("Error");
	}
	printf("something went wrong\n");

	return (0);
}
