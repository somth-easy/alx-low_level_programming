#inlcude "mian.h"

/*
 * _strcat - concatinates 2 strings
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
int y;
	int t;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	t = 0;
	while (src[t] != '\0')
	{
		dest[s] = src[t];
		s++;
		t++;
	}

	dest[s] = '\0';
	return (dest);
}
