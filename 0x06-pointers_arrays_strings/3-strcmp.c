#include "main.h"

/**
 * _strcmp - entry point
 * @s1: char variable
 * @s2: char variable
 * Return: on success
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return(*s1 - *s2);
	}
}
