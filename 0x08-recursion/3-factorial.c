#include "main.h"

/**
 * factorial - entry point
 * @n: int variable
 * Return: on success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (n);
	return (n * factorial(n - 1));
}
