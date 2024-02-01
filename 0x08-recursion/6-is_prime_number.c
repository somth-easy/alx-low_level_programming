#include "main.h"

/**
 * is_prime_number - entry point
 * @n: int variable
 * Return: on success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (verify(2, n));
}

/**
 * verify - entry point
 * @x: int variable
 * @y: int variable
 * Return: on success
 */

int verify(int x, int y)
{
	if ((y % x) == 0)
		return (0);
	else if ((x * x) > y)
		return (1);
	else
		return (verify(x + 1, y));
}
