#include "main.h"

/**
 * _strpbrk - entry point
 * @s: char pointer variable
 * @accept: char pointer variable
 * Return: on success
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	if (*s == '\0')
		return (NULL);

	return (s);
}
