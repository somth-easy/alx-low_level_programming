#include "main.h"

/**
 * string_nconcat - entry point
 * @s1: argument one
 * @s2: argument two
 * @n: argument three
 * Return: On success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int str1, str2, len;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (n == 0)
		return (NULL);

	for (str1 = 0; s1[str1] != '\0'; str1++)
		;
	for (str2 = 0; s2[str2] != '\0' && str2 <= n; str2++)
		;

	len = str2 + str2 + 1;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < str1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < str2; j++, i++)
	{
		ptr[i] = s2[j];
	}

	ptr[i] = '\0';

	return (ptr);
}
