#include "main.h"

/**
 * print_to_98 - entry point
 *
 * @n: hold copy of parsed value
 *
 * Return: on success
 */

void over_98(int n);
int under_0(int n);


void print_to_98(int n)
{
	int i;

	i = n;

	over_98(i);

	i = under_0(i);

	if (i >= 0 && i <= 98)
	{
		while (i < 10)
		{
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
			i++;
		}
		while (i <= 98)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
	}
	_putchar('\n');

}

/**
 * over_98 - entry point
 *
 * @n: value copy
 *
 * Return: on success
 */

void over_98(int n)
{
	int i, x, m;

	i = n;
	x = 1;

	if (i > 98)
	{
		for (i = n; i > 98; i--)
		{
			if (i > 100)
			{
				_putchar(x + '0');
				m = i - 100;
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}

			if (i < 100)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');

				}
			}
		}
	}
}

/**
 * under_0 - entry point
 *
 * @n: value copy
 *
 * Return: on success
 */

int under_0(int n)
{
	int i, m;

	i = n;

	if (i < 0)
	{
		m = i * -1;

		while (m > 0)
		{
			_putchar('-');

			if (m > 9)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
			_putchar(',');
			_putchar(' ');
			m--;
			i++;
		}
	}
	return (i);
}
