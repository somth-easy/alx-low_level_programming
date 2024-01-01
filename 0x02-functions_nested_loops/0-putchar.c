#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	char string[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}
