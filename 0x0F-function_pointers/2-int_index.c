#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: argument one
 * @size: argument two
 * @cmp: argument three
 * Return: on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
