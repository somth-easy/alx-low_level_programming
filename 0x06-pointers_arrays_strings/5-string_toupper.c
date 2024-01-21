#include "main.h"

/**
 * string_toupper - entry point
 * @c: char pointer variable
 * Return: on success
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z' && c[i] != '\0')
		{
			c[i] = c[i] - 'a' + 'A';
		}
		i++;
	}

	return (c);
}
