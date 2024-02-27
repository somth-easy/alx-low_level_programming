#include "dog.h"

/**
 * init_dog - entry point
 * @d: struct name
 * @name: struct member one
 * @age: struct member two
 * @owner: struct member three
 * Return: on success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
