
/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The maximum number of characters
 *
 * Return: A pointer to the beginning of the modified destination string
 */
char *_strncat(char *dest, const char *src, int n)
{
char *s = dest;
while (*dest)
{
dest++;
}
while (*src && n--)
{
*dest++ = *src++;
}
*dest = '\0';
return (s);
}
