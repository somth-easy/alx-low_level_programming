#include "main.h"

/**
 * print_rev - entry point
 * @str: points to value in address passed
 * Return: on success
 */

void print_rev(char *str)
{
	int i, size = 0;

	while (*str != '\0')
	{
		size++;
		str++;
	}

	size -= 1;

	for (i = size; i >= 0; i--)
	{
		--str;
		_putchar(*str);
	}
	_putchar('\n');
}
