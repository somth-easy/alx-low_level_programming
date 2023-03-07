#include "main.h"

/*
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
char *s = dest;
while (*dest)
{
dest++;
}
while ((*dest++ = *src++))
{
}
return (s);
}
