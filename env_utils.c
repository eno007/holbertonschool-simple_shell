#include <shell.h>
/**
 * print_dlistint - print a doubly-linked list
 * @h: pointer to the head of the list
 *
 * Return: list length
 */
int main(int argc, char *argv[], char * p_env[])
{
	int i;

	for (i = 0; p_env[i] != NULL; i++)
		printf("\n%s", p_env[i]);
	getchar();
	return (0);
}
/**
 * print_dlistint - print a doubly-linked list
 * @h: pointer to the head of the list
 *
 * Return: list length
 */
char *get_env(char *str, list_t *env)
{
	int j = 0, cs = 0;

	while (env != NULL)
	{
		j = 0;
		while ((env->var)[j] == str[j]) 
			j++;
		if (str[j] == '\0' && (env->var)[j] == '=')
			break;
		env = env->next;
	}

	while (str[cs] != '\0')
		cs++;
	cs++;
	return (c_strdup(env->var, cs));
}
