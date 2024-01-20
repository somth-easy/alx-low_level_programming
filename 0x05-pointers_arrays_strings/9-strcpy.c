#include "main.h"

/**
 * _strcpy - entry point
 * @dest: char pointer 
 * @src: char pointer
 * Return: on return
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);

}
