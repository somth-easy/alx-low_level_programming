#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: char pointer variable
 * Return: on success
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}


