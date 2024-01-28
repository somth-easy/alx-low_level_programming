#include "main.h"

/**
 * print_diagsums - entry point
 * @a: int pointer variable
 * @size: int variable
 * Return: on success
 */

void print_diagsums(int *a, int size)
{
	int val1, val2, i, x;

	x = size - 1;
	val1 = 0;
	val2 = 0;

	for (i = 0; i < size; i++)
	{
		val1 = val1 + a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		val2 = val2 + a[i * size + (x - i)];
	}

	printf("%d, %d\n", val1, val2);
}
