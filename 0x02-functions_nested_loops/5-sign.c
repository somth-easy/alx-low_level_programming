#include "main.h"

/**
 * print_sign - reads n and determines if the value is positive negative or 0
 *
 * @n: holds copy of value parsed to the function
 *
 * Return: on Success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
