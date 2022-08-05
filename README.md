# Simple Shell
**Simple Shell** is a simple command line prompt that takes the most basics commands that are present in the bash shell and runs them.


![Flowchart](https://user-images.githubusercontent.com/105612348/182954917-0b5203a9-0214-4c48-934e-4c2244040de5.png)


***The shell works by being compiled using `gcc *.c -o shell`.***

## Launching the shell after compiling:
`./shell`

* Output: prompt (getline) to terminal: `$ `

## Syntax
The shell commands take in the following syntax: `command_name {argument}`. It executes a command after it is written by user into `stdin`.

#### Example:
`ls -l`: </br>
In this case the command is `ls` (list all files and directories inside the current directory) followed by argument, in this case `-l`.


### List of basic commands
* `cat` - prints and concatenates files to the standard output
* `cp` -copies a file into another file
* `ls` - will list all files and directories in current working directory
* `mv` - helps to move one file into another file
* `pwd` - given you the current working directory


### Builtins
There are two built-ins programmed into the shell. Below is a description and use for each built-in.

* `env` - is used to display the environment variable with its values.

* `exit` - is used to exit the current shell.



## Files

* [shell.h](https://github.com/eno007/holbertonschool-simple_shell/blob/main/shell.h) :arrow_right: Header file, contains all prototypes for functions used, as well as libriaries.
* [_strlen.c](https://github.com/eno007/holbertonschool-simple_shell/blob/main/_strlen.c) :arrow_right: Finds the length of a string.
* [command_path.c](https://github.com/eno007/holbertonschool-simple_shell/blob/main/command_path.c) :arrow_right: Creates the full path of the entered command.
* [env_utils.c](https://github.com/eno007/holbertonschool-simple_shell/blob/main/env_utils.c) :arrow_heading_down:  
  * `int _str_n_cmp(const char *s1, const char *s2, size_t n)` :arrow_right: Compares at most the first n bytes of s1 and s2.
  * `int _printenv(void)` :arrow_right: Prints the environment global variable.
  * `char *_getenv(char *name)` :arrow_right: Searches for the environment string pointed to by name and returns the associated value to the string.
* [shell.c](https://github.com/eno007/holbertonschool-simple_shell/blob/main/shell.c) :arrow_heading_down:
  * `int execute(char *cmd_arr[])` :arrow_right: Function to check if the entered string is a command or not, if yes execute it.
  * `int command_read(char *str, size_t __attribute__((unused))characters)` :arrow_right: Executes built-ins and tokenizes entered string.
  * `int main(int __attribute__ ((unused))argc, char *argv[])` :arrow_right: Main function, displays prompt.


