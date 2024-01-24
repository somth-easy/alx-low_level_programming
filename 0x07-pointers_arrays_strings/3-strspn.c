#include "main.h"

/**
 * _strspn - entry point
 * @s: char pointer variable
 * @accept: char pointer variable
 * Return: on success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i = 0, n;

	for (; accept[i]; i++)
	{
		n = 0;
		while (s[n])
		{
			if (accept[i] == s[n])
			{
				x++;
				break;
			}
			n++;
		}
	}

	if (x != 0)
	{
		x++;
	}
	return (x);

}
