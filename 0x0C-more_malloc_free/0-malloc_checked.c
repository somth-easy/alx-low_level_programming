#include "main.h"

/**
 * malloc_checked - entry point
 * @b: argurment one
 * Return: on success
 */

void *malloc_checked(unsigned int b)
{
	int i;
	void *ptr;

	if (b == 0)
		return (NULL);

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

