#include "main.h"

/**
 * _strchr - entry point
 * @s: char pointer variable
 * @c: char variable
 * Return: on success
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' || s[i] == c)
	{

		if (s[i] == '\0' || s[i] == c)
		{
			s++;
			return (s);
		}
		i++;
		s++;
	}

	return (s);
}
