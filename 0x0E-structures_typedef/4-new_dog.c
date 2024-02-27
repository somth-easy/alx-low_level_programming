#include "dog.h"

/**
 * _strcpy - entry point
 * @dest: argument one
 * @src: argument two
 * Return: on success
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - entry point
 * @name: member one
 * @age: member two
 * @owner: member three
 * Return: on success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	unsigned int n, x, len1 = 0, len2 = 0;

	ptr = (dog_t *)malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (n = 0; name[n] != '\0'; n++)
		len1++;
	for (x = 0; owner[x] != '\0'; x++)
		len2++;
	ptr->name = (char *)malloc(len1 + 1);

	if (ptr->name == NULL)
	{
		return (NULL);
	}

	ptr->owner = (char *)malloc(len2 + 1);

	if (ptr->owner == NULL)
	{
		return (NULL);
	}

	_strcpy(ptr->name, name);
	_strcpy(ptr->owner, owner);

	ptr->age = age;

	return (ptr);
}


