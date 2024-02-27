#include "dog.h"

/**
 * print_dog - entry point
 * @d: struct alias
 * Return: on success
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner - "(nil)";
		if (d->age <= 0.0)
			d->age = 0.0;

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		return;
}
