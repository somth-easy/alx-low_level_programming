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

	for (i = (length / 2); str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
