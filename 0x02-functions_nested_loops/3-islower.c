#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: on success
 */

int _islower(int c)
{
	char current, start = 'a', end = 'z';

	for (current = start; current <= end ; current++)
	{
		if (current == c)
		{
			return (1);
		}
	}
	return (0);
}
