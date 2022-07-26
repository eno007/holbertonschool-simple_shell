#include <stdio.h>
#include <unistd.h>

/**
 * main - prints pid and ppid
 * 
 * Return: 0
 */
int main(void)
{
	pid_t p_id, p_pid;

	p_id = getpid();
	p_pid = getppid();

	printf("Process ID: %d\n", p_id);
	printf("Parent process ID: %d\n", p_pid);

	return (0);
}
