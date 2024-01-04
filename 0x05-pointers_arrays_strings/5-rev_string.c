#include "main.h"

/**
 * rev_string - entry point
 * @str: points to value in address passed
 * Return: on success
 */

void rev_string(char *str)
{
	int i, size = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		size++;
		ptr++;
	}

	size -= 1;
	i = size;

	while (i > 0)
	{
		ptr--;
		_putchar(*ptr);
		if (i == 0)
		{
			_putchar('\n');
		}
		i--;
	}
	ptr = '\0';
}
