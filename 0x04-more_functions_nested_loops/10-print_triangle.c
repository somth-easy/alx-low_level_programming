#include "main.h"

/**
 * print_triangle - entry point
 * @size: stores copy of value passed to the function
 * Return: on success
 */

void print_triangle(int size)
{
	int i, m, n, x;
	char h = '#';

	n = size;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; size > i; i++)
	{
		for (m = n; (m - 1) > 0; m--)
		{
			_putchar(' ');
		}
		for (x = i; x >= 0; x--)
		{
			_putchar(h);
		}
		_putchar('\n');
		n--;
	}
}
