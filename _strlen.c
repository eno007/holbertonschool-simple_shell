#include "shell.h"

/**
 * _strlen - find string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;
	
	while (s[length])
	{
		length++;
	}
	return (length);
}
