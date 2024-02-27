#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: argument one
 * @f: function pointer
 * Return: on success
 */

void print_name(char *name, void (*f)(char *))
{
	char *ptr = name;

	if (name == NULL || f == NULL)
		return;

	f(ptr);
}
