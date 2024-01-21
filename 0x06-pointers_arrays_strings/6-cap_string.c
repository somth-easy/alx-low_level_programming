#include "main.h"

/**
 * cap_string - entry point
 * @c: char pointer variable
 * Return: on success
 */

char *cap_string(char *c)
{
	int i, b = 0;

	char d[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '\"', '(', ')', '{', '}', '\0'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (b = 0; d[b] != '\0'; b++)
		{
			if ((i == 0) || c[i - 1] == d[b] && c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 'a' + 'A';
			}
		}
	}

	return (c);
}


