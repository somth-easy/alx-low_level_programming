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
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min++;

	return (ptr);
}
