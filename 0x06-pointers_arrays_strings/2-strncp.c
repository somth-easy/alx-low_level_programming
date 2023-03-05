#include "main.h"

/**
 * _strncpy - function copies a string
 *
 * @src: The source of the strings
 * @dest: The destination of the string
 * @n: The maximum lent of characters to copy
 *
 * Return: A pointer to the beginning of the modified destination stringi 
 */
char *_strncpy(char *dest, char *src, int n)
{
char *d = dest;
while (n > 0 && *src != '\0')
{
*dest++ = *src++;
n--;
}
while (n > 0)
{
*dest++ = '\0';
n--;
}
return d;
}
