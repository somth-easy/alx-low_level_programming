#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: argument one
 * @size: argument two
 * @action: argument three
 * Return: on success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
