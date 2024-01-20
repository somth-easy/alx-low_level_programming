#include "main.h"

/**
 * _strncpy - entry point
 * @dest: char variable
 * @src: char varialbe
 * @n: int variable
 * Return: on success
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* size_t a = strlen(src); */
	size_t i;
	size_t x = (size_t)n;

	for (i = 0; src[i] != '\0' && i < x; i++)
	{
		dest[i] = src[i];
	}

	while (i < x)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
