#include "main.h"

/**
 * reverse_array - entry point
 * @a: int pointer variable
 * @n: int variable
 * Return: on success
 */

void reverse_array(int *a, int n)
{
	int x = n - 1;

	while (x >= 0)
	{
		printf("%d", a[x]);
		if (x > 0)
		{
			printf(", ");
		}
		--x;
	}
	printf("\n");
}
