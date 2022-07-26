#include <stdio.h>
#include <unistd.h>
/**
 * ppid - prints pid and ppid
 * 
 * Return: 0
 */
int main(void)
{
	pid_t p_pid;

	p_pid = getppid();

	printf("PPID: %d\n", p_pid);

	return (0);
}
