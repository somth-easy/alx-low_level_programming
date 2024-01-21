#include "main.h"

/**
 * leet - entry point
 * @c: char pointer variable
 * Return: on success
 */

char *leet(char *c)
{
	int i, n;

	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (n = 0; a[n] != '\0'; n++)
		{
			if (a[n] == c[i])
			{
				c[i] = b[n];
			}
		}
	}
	return (c);
}
