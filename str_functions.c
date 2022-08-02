#include "shell.h"

/**
 * _strcpy - copies a string to another string
 * @dest: destination
 * @src: source to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int length;

	for (length = 0; src[length]; length++)
		dest[length] = src[length];
	dest[length] = '\0';
	return (dest);
}

/**
 * _strcat - string concatenate
 * @dest: destination
 * @src: source
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, src_len = 0;

	while (dest[dest_len])
		dest_len++;

	while (src[src_len])
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

/**
 * _strcmp - string compare
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if strings are indetical, 1 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int length = 0, result = 0;

	while (s1[length] || s2[length])
	{
		if (s1[length] != s2[length])
		{
			result = (s1[length] - s2[length]);
			break;
		}
		else
			length++;
	}
	return (result);
}

/**
 * _strncmp - string n compare
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to compare
 * Return: 0 if string are indetical, less than 0 if s1 shorter than s2
 * 		greater than 0 if s1 is longer than s2
 */

int _strncmp(char *s1, char *s2, int n)
{
	int i = 0, len;

	for (len = 0; s1[len] && s2[len] && len < n; len++)
	{
		if (s1[len] > s2[len])
			return (s1[len] - s2[len]);
		else if (s1[len] < s2[len])
			return (s1[len] - s2[len]);
	}
	if (i == n)
		return (0);
	else
		return (-1);
}

/**
 * _strdup - string duplicate
 * @str: string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	char *cpy;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	cpy = malloc(len * sizeof(char) + 1);

	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];
	return (cpy);
}
