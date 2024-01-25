#include "main.h"

/**
 * _strpbrk - entry point
 * @s: char pointer variable
 * @accept: char pointer variable
 * Return: on success
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n = 0;

	while (s[n] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[n] == accept[i])
			{
				return (s);
			}
		}
		s++;
		if (*s)
		{
			return (NULL);
		}
	}
	return (s);
}
