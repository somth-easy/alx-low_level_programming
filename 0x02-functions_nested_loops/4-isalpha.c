#include "main.h"

/**
 * _isalpha - Check if a character is an alphabetic character 
 *
 * @c: hold copy of value parsed to function
 *
 * Return: on success
 */

int _isalpha(int c)
{
	char start_lower = 'a', end_lower = 'z';
	char current = start_lower;

	while (current <= end_lower)
	{
		if ((current == c) || ((current - 'a' + 'A') == c))
		{
			return (1);
		}
		current++;
	}
	return (0);
}
