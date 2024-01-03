#include "main.h"

/**
 * _isdigit - entry point
 * @c: stores copy of passed value
 * Return: on success
 */

int _isdigit(char c)
{
	char start = '0', end = '9';
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

