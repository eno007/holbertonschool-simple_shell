#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
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
void _unsetenv(char **arv);
void _setenv(char **arv);
void env(char **arv __attribute__ ((unused)));
int _atoi(char *s);
void exitt(char **arv);
//int main(int argc, char *argv[], char * p_env[]);
char *get_env(char *str, list_t *env);


#endif
