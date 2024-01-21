#include "main.h"

/**
 * _memset - entry point
 * @s: char pointer variable
 * @b: char variable
 * @n: int variable
 * Return: on success
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, x = n;

	for (i = 0; i < x; i++)
	{
		s[i] = b;
	}

	return (s);
}
