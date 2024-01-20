#include "main.h"

/**
 * _strcat - entry point
 * @dest: char variable
 * @src: char variable
 * Return: on success
 */

char *_strcat(char *dest, char *src)
{
	size_t a = strlen(dest);
	size_t n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[a] = src[n];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
