#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        int a, b, c, d;

        d = c = b = a = '0';
        while (a <= '9')
        {
                if (a >= '1')
                {
                        b = '0';
                        c = a;
                        d = b + 1;
                }
                while (b <= '9')
                {
                        if (b >= '1' &&  b < '9' && a < '1')
                        {
                                c = a;
                                d = b + 1;
                        }
                        if (b == '9' && a < '1')
                        {
                                c = a + 1;
                                d = '0';
                        }
                        if (a >= '1' && b >= '1')
                        {
                                c = a;
                                d = b + 1;
                        }
                        while (c <= '9')
                        {
                                if (c >= '1' && c != a)
                                        d = '0';
                                if (a == '0' && b == '0' && c == '0' && d == '0')
                                        d = '1';
                                while (d <= '9')
                                {
                                        putchar(a);
                                        putchar(b);
                                        putchar(' ');
                                        putchar(c);
                                        putchar(d);
                                        if (a == '9' && b == '8' && c == '9' && d == '9')
                                                break;
                                        putchar(',');
                                        putchar(' ');
                                        ++d;
                                } ++c;
                        } ++b;
                } ++a;
        } putchar('\n');
        return (0);
}
