#include "main.h"

/**
 * _strspn - entry point
 * @s: char pointer variable
 * @accept: char pointer variable
 * Return: on success
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, n = 0, y = 0, z = 0;
	unsigned int x = 0;
	char tmp[50];

	for (i = 0; s[i] != '\0'; i++)
	{
		if (y == 0 && i == 0)
		{
			while (accept[z] != s[i])
			{
				if (accept[z] == '\0')
					goto skip;
				z++;
			}
			tmp[y] = s[i];
			y++;
			tmp[y] = '\0';
			n++; x++;
		}
skip:
		z = 0;
		while (tmp[y] != '\0')
		{
			while (accept[z] != s[i])
			{
				if (accept[z] == '\0')
				{
					goto jump;
				}
				z++;
			}
			if ((tmp[y] == s[i]) && (tmp[y + 1] != '\0' || tmp[y + 1] == '\0'))
			{
				goto jump;
			}
			y++;
			if (tmp[y] == '\0')
			{
				tmp[y] = s[i];
				y++;
				tmp[y] = '\0';
				n++; x++;
			}

		}
jump:
		y = 0;

	}
	x++;
	return (x);
}
