#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: data type passed to the function
 *
 * Return: The absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
