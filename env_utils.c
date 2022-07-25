#include <shell.h>
int main(int argc, char *argv[], char * p_env[])
{
	int i;

	for (i = 0; p_env[i] != NULL; i++)
		printf("\n%s", p_env[i]);
	getchar();
	return (0);
}
