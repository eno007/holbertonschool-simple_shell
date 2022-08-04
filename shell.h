#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>



char *name;/* global variable */
extern char **environ;

int _strlen(char *s);
int _strcmp(char *strg1, char *strg2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _str_n_cmp(const char *s1, const char *s2, size_t n);

int _printenv(void);
char *command_path(char *cmd);
char *_getenv(char *name);

int command_read(char *str, size_t __attribute__((unused))characters);
int main(int __attribute__ ((unused))argc, char *argv[]);
int execute(char *cmd_arr[]);

#endif
