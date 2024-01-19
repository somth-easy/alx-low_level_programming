#include "main.h"

/**
 * print_array - entry point
 * @a: pointer of type int
 * @n: int variable
 * Return: on success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
