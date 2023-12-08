#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always (0)
 */

int main(void)
{

int a, b, c;

for (a = '0'; a <= '7'; a++)
{
for (b = '1'; b <= '8'; b++)
{
if (a >= '1' && a <= '7' && b == '1')
{
b = b + (a - '0');
}
for (c = '2'; c <= '9'; c++)
{
if (b >= '1' && b <= '8' && c == '2')
{
c = c + (b - '1');
}
putchar(a);
putchar(b);
putchar(c);
if (a == '7' && b == '8' && c == '9')
break;
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
