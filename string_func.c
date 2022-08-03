#include "shell.h"

/**
 * _strcmp - Function that compares 2 strings
 * @strg1: first string
 * @strg2: second string
 * Return: 0 if both strings are identical or strg1 - strg2
 */

int _strcmp(char *strg1, char *strg2)
{
	while ((*strg1 != '\0' && *strg2 != '\0') && *strg1 == *strg2)
	{
		strg1++;
		strg2++;
	}
	if (*strg1 == *strg2)
	{
		return (0);
	}
	else
	{
		return (*strg1 - *strg2);
	}
}
/**
 * _strlen - Function that finds the length of a string
 * @s: pointer to string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * _strcat - Function that concatenates 2 strings
 * @dest: string destination
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{ dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcpy - Function that copies strings
 * @dest: string destination
 * @src: source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - Function to duplicate a string
 * @str: pointer to string
 * Return: String
 */

char *_strdup(char *str)
{
	char *string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	string = (char *)malloc(sizeof(char) * (i + 1));

	if (string == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		string[j] = str[j];
	return (string);
}
