#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


typedef struct list
{
	char *var;
	struct list *next;
} list_t;


int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, unsigned long n);
char *_strdup(char *str);
int main(int argc, char *argv[], char * p_env[]);


#endif
