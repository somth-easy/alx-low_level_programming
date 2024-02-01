#include "main.h"

/**
 * _print_rev_recursion - entry point
 * @s: char pointer variable
 * Return: on success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
