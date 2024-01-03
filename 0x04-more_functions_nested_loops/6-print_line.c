#include "main.h"

/**
 * print_line - entry point
 * @n: hold copy of passed value
 * Return: on success
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
