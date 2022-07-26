#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - splits a string into arrays for each word of the string
 *
 * Return: 0
 */
int main(void)
{
	char *buf;
	size_t bufsize = 1024;
	char *token;

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
		
		token = strtok(buf, " ");
		while (token)
		{
			printf("%s\n", token);
			token = strtok(NULL, " ");
		}
	}

	return (0);
}
