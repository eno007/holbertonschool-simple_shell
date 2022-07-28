#include <unistd.h>
#include <stdio.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
    unsigned int i;

    i = 0;
    printf("Environ address: %p \n", environ);
    printf("Env parameter address: %p \n", env);

    return (0);
}
