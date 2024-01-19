#include "main.h"

/**
 * puts_half - entry point
 * @str: char to check
 * Return: on Success
 */

void puts_half(char *str)
{
	size_t i;

	size_t length = strlen(str);

	if ((length % 2) == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}

	for (i = i; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
