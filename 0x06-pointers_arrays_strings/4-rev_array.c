#include "main.h"

/**
 * reverse_array - entry point
 * @a: int pointer variable
 * @n: int variable
 * Return: on success
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
