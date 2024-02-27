#include "main.h"

/**
 * array_range - entry point
 * @min: int variable
 * @max: int variable
 * Return: on success
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, n = min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max + 1));

	if (ptr == NULL)
		return (NULL);

	ptr[0] = n;
	n++;


	for (i = 1; i <= max; i++, n++)
		ptr[i] = n;

	return (ptr);
}
