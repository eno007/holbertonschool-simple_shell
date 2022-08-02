# Simple Shell
**Simple Shell** is a simple command line prompt that takes the most basics commands that are present in the bash shell and runs them.


![Flowchart](https://user-images.githubusercontent.com/105612348/182255904-990b0d9c-54a6-487f-9717-2cf08280498d.png)


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

File name | Description
----- | -------
[shell.h](https://github.com/eno007/holbertonschool-simple_shell/blob/main/shell.h) | Header file, contains all prototypes for funcitons used, as well as libriaries.
[_strlen.c](https://github.com/eno007/holbertonschool-simple_shell/blob/main/_strlen.c) | Finds the length of a string.

