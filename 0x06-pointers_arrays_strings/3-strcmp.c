#include "main.h"

/**
 * _strcmp - entry point
 * @s1: char variable
 * @s2: char variable
 * Return: on success
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
