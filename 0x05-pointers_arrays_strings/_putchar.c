#include "main.h"

/**
 * _putchar - entry point
 * @c: copy of value passed to function
 * Return: on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
