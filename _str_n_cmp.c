#include "shell.h"

/**
 *
 *
 *
 */
int _str_n_cmp(char *s1, char *s2, int n)
{
	char c1, c2;

	while (n--)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0' || c2 == '\0')
		{
			if (c1 > c2)
				return (1);
			else
			{
				if (c1 < c2)
					return (-1);
				else
					return (0);
			}
		}
	}
}
