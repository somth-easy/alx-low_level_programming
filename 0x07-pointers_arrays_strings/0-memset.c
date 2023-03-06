#include "main.h"

/*
 * _memset - The memory area pointed to by @s will be filled with @n bytes of the value @b.
 * @s: points to an array of bytes in memory.
 * @b: stores a single byte of data.
 * @n: bytes of the memory area
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
