#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


extern char **environ;

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *str);

int _printenv(void);
char *_getenv(const char *name);

int command_read(char *s, size_t __attribute__((unused))characters);
int execute(char *cmd_arr[]);
int main(int __attribute__ ((unused))argc, char *argv[]);

char *_strtok(char *str, const char *delim);
unsigned int check_delim(char c, const char *str);

char *command_path(char *cmd);

void free_exit(char **command);



#endif
