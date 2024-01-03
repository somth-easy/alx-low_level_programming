#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	char *f = "Fizz";
	char *b = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && i != 0)
		{
			printf("%s", f);
		}
		if ((i % 5) == 0 && i != 0)
		{
			printf("%s", b);
		}
		else if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
