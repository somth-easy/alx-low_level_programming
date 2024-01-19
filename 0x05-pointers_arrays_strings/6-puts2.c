#include "main.h"

/**
 * puts2 - entry point
 * @str: points to value in the address passed
 * Return: on success
 */

void puts2(char *str)
{
	int i = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (i = 0)
		{
			_putchar(ptr[i]);
			ptr++;
			i++;
		}
		for (i = 0; *ptr != '\0'; i++)
		{
			_putchar(ptr[i]);
			ptr++;
		}
	}
	_putchar('\n');
}
