#include "main.h"

/**
 * _puts - entry point
 * @str: points to value in address passed
 * Return: on success
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
