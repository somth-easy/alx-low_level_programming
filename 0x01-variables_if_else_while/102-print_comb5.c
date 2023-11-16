#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always (0)
 */

int main()
{
	int a, b, c, d, var_1, var_2;

	var_1 = 1;

	for (a = '0'; a >= '0' && a <= '9'; a++)
	{
		for (b = '0'; b >= '0' && b <= '9'; b++)
		{
			var_2 = 1;
			for (c = '0'; c >= '0' && c <= '9'; c++)
			{
				for (d = '0'; d >= '0' && d <= '9'; d++)
				{
					if (var_1 > 0)
					{
						d = '1';
					}
					else if (a >= '1' && b == '9' && var_2 != 0)
					{
						c = a + 1;
						var_2 = 0;
					}
					else if (a >= '1' && c == '0' && d == '0')
					{
						d = b + 1;
						c = a;
					}
					else if (a <= '0' && b >= '1' && b < '9' && c == '0' && d == '0')
					{
						d = b + 1;
					}
					else if (a <= '0' && b == '9' && c == '0')
					{
						c = a + 1;
					}
					
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
					{
						goto end_now;
					}
					putchar(',');
					putchar(' ');
					
					var_1 = 0;
				}
			}
		}
	}
end_now:
	putchar('\n');

	return (0);
}
