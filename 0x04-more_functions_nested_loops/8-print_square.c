#include "main.h"

/**
 * print_square - entry point
 * @size: hold copy of value passed to function
 * Return: on success
 */

void print_square(int size)
{
	int i, m;

	for (i = 0; i < size; i++)
	{
		for (m = size; m > 0; m--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
