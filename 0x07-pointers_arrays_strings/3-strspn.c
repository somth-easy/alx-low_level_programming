#include "main.h"

/**
 * _strspn - entry point
 * @s: char pointer variable
 * @accept: char pointer variable
 * Return: on success
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int x = 0;
	int i, y = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[y])
		{
			x += 1;
			y++;
			i = -1;
		}
	}
	x++;

	return (x);
}
