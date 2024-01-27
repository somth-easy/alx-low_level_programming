#include "main.h"

/**
 * _strstr - entry point
 * @haystack: char pointer variable
 * @needle: char pointer variable
 * Return: on success
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;
		while ((haystack[i] == needle[i]) && (needle[i] != '\0'))
		{
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
