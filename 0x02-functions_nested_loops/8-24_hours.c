#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: on success
 */

void jack_bauer(void)
{
	int i, n;

	for (i = 0; i <= 23; i++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
	}
}
