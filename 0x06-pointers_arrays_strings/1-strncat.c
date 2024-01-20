#include "main.h"

/**
 * _strncat - entry point
 * @dest: char variable
 * @src: char variable
 * @n: int variable
 * Return: on success
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t a = strlen(dest);
	size_t i;
	size_t x = (size_t)n;

	for (i = 0; src[i] != '\0' && i < x; i++)
	{
		dest[a] = src[i];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
