#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: holds copy of the value parsed to function
 *
 * Return: on success
 */

int print_last_digit(int n)
{
	int retval;

	if (n < 0)
	{
		n *= -1;
	}

	retval = n % 10;

	_putchar(retval + '0');

	return (retval);
}
