#include "main.h"

/**
 * _strlen - entry point
 * @s: stores address of string
 * Return: on success
 */

int _strlen(char *s)
{
	int retval = 0;

	while (*s != '\0')
	{
		retval++;
		s++;
	}

	return (retval);
}
