#include "main.h"

/**
 * _memset - entry point
 * @str: agurment one
 * @c: argument two
 * @x: argument three
 * Return: on success
 */

char *_memset(char *str, char c, unsigned int x)
{
	unsigned int i;

	for (i = 0; i < x; i++)
		str[i] = c;

	return (str);
}

/**
 * _calloc - entry point
 * @nmemb: argument one
 * @size: argument two
 * Return: on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb);

	return (ptr);
}
