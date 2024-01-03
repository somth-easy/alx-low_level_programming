#include "main.h"

/**
 * more_numbers - entry point
 *
 * Return: on success
 */

void more_numbers(void)
{
	int i, m = 0;

	while (m < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		m++;
	}
}
