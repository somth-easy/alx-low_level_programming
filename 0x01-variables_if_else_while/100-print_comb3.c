#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always (0)
 */

int main(void)
{

	int a, b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (a >= '1' && a <= '8' && b == '1')
			{
				b = b + (a - '0');
			}
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
