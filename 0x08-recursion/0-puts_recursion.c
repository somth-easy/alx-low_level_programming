#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: char poiner variable
 * Return: on success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
