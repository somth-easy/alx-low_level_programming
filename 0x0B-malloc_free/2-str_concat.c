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
	size_t size1 = 0, size2 = 0, len = 0;
	unsigned int i, n;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1)
	{
		for (size1 = 0; s1[size1] != '\0'; size1++)
			;
	}
	if (s2)
	{
		for (size2 = 0; s2[size2] != '\0'; size2++)
			;
	}
	len = size1 + size2 + 1;

	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];

	for (n = 0; n < size2; n++, i++)
		ptr[i] = s2[n];

	ptr[i] = '\0';

	return (ptr);
}
