#include "main.h"

/*
 * _strcat - concatinates 2 strings
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
char *s = dest;
while (*dest) {
dest++;
}
while ((*dest++ = *src++)) {}
return s;
}
