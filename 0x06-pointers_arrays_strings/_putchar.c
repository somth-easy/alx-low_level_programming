#include "main.h"

/**
 * _putchar - entry point
 * @c: char variable
 * Return: on success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
