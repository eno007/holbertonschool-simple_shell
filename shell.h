#ifndef SHELL_H
#define SHELL_H
#define ERR_MALLOC "Unable to malloc space\n"
#define ERR_FORK "Unable to fork and create child process\n"
#define ERR_PATH "No such file or directory\n"
#define BUFFER 1024
#define TRUE 1
#define PROMPT "$ "

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>


char *name;
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

int shell_exit(void);
int shell_env(void);
void errors(int error);
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag);
void free_dp(char **array, unsigned int length);
char **tokenizer(char *str);

int command_read(char *str, size_t __attribute__((unused))characters);
int main(int __attribute__ ((unused))argc, char *argv[]);
int execute(char *cmd_arr[]);

#endif
