#include "main.h"

/**
 * _isupper - entry point
 * @c: passed value
 * Return: on success
 */

int _isupper(char c)
{
	char start = 'A', end = 'Z';
	int i;

	for (i = start; i <= end; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
