#include "main.h"

/**
 * print_diagonal - entry point
 * @n: hold copy of passed value
 * Return: on success
 */

void print_diagonal(int n)
{
	int i, m;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; n > i; i++)
	{

		/*if(i <= 0)
		{
			continue;
		}*/

		for (m = i; m > 0; m--)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}

