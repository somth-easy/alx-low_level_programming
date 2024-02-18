#include "main.h"

/**
 * _strdup - entry point
 * @str: char pointer variable
 * Return: on success
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	size_t len;

	if (str == NULL)
		return (NULL);
	
	for (len = 0; str[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = str[i];

	return (ptr);
}
