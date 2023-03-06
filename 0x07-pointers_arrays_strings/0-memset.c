#include "main.h"

/**
 * _memset - function fills the first @n bytes of the memory area
 * @s: points to an array of bytes in memory.
 * @b: stores a single byte of data.
 * @n: bytes of the memory area
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
