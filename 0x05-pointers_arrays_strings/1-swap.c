#include "main.h"

/**
 * swap_int - entry point
 * @a: address to passed var
 * @b: address to passed var
 * Return: on success
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
