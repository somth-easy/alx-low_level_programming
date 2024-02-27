#include "dog.h"

/**
 * free_dog - entry point
 * @d: argument one
 * Return: on success
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
