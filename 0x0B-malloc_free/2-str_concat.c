#include "main.h"

/**
 * str_concat - entry point
 * @s1: char pointer variable one
 * @s2: char pointer variable two
 * Return: on success
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t len, len2;
	unsigned int i, n;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (len = 0; s1[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = s1[i];

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	ptr = realloc(ptr, sizeof(char) * (len + len2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < len2; n++, i++)
		ptr[i] = s2[n];

	ptr[i] = '\0';

	return (ptr);
}
