#include "main.h"

/**
 * _memcpy - entry point
 * @dest: char pointer variable
 * @src: char pointer variable
 * @n: int variable
 * Return: on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, x = n;

	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
