#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints "$" and waits for the user to enter command
 * 			and prints it in the next line
 *
 * Return: 0
 */
int main(void)
{
	char *buf;
	size_t bufsize = 1024;

	buf = malloc(bufsize * sizeof(char));
	if (buf == NULL)
	{
		printf("Unable to allocate memory");
		exit(1);
	}

	while (1)
	{
		printf("$ ");
		getline(&buf, &bufsize, stdin);
		printf("%s", buf);
	}
	return (0);
}
