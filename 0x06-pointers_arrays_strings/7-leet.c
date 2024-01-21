#include "main.h"

/**
 * leet - entry point
 * @c: char pointer variable
 * Return: on success
 */

char *leet(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] == 'a' || c[i] == 'A')
		{
			c[i] = '4';
		}
		else if (c[i] == 'e' || c[i] == 'E')
		{
			c[i] = '3';
		}
		else if (c[i] == 'o' || c[i] == 'O')
		{
			c[i] = '0';
		}
		else if (c[i] == 't' || c[i] == 'T')
		{
			c[i] = '7';
		}
		else if (c[i] == 'l' || c[i] == 'L')
		{
			c[i] = '1';
		}
		i++;
	}
	return (c);
}
