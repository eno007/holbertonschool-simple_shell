#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments
 * @ac: number of arguments in av
 * @av: array of strings
 * Return: 0
 */
int main(int ac, char **av)
{
	int length = 0;

	while (av[length] != NULL)
	{
		printf("%s ", av[length]);
		length++;
	}
	printf("\n");

	return (0);
}
