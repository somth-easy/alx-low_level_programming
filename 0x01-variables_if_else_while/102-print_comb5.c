#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always (0)
 */

int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = (a == '1' && b == '9') ? a + 1 : '0'; c <= '9'; c++)
			{
				for (d = (a == '1' && c == '0' && b == '9') ? b + 1 : '0'; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (!(a == '9' && b == '8' && c == '9' && d == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
