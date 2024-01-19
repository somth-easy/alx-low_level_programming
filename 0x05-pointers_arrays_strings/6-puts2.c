#include "main.h"

/**
 * puts2 - entry point
 * @str: points to value in the address passed
 * Return: on success
 */

void puts2(char *str)
{
	size_t i = 0;
	char *ptr = str;

	size_t length = strlen(str);

	while (i <= length && length > 0 && *ptr != '\0')
	{
		_putchar(ptr[i]);
		if (*ptr != '\0')
		{
			i += 2;
		}
	}
	_putchar('\n');
}
