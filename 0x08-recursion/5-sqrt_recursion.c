#include "main.h"

/**
 * _sqrt_recursion - entry point
 * @n: int variable
 * Return: on success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (verify(1, n));
}

/**
 * verify - entry point
 * @x: int variable
 * @y: int variable
 * Return: on success
 */

int verify(int x, int y)
{
	if (y == 0)
		return (0);
	else if ((x * x) == y)
		return (x);
	else if ((x * x) > y)
		return (-1);
	else
		return (verify(x + 1, y));
}
