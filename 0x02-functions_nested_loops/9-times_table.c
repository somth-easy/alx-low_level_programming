#include "main.h"

/**
 * times_table - Entry point
 *
 * Retrurn: on success
 */

void times_table(void)
{
	int i, n, v1;

	for (i = 0; i < 10 ; i++)
	{
		for (n = 0; n <= 9; n++)
		{

			v1 = i * n;

			if (v1 > 9)
			{
				_putchar((v1 / 10) + '0');
				_putchar((v1 % 10) + '0');
			}
			else
			{
				_putchar(v1 + '0');
			}

			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((i * (n + 1)) <= 9 && n < 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
