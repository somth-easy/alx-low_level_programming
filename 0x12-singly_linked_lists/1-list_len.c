#include "lists.h"

/**
 * list_len - entry point
 * @h: struct pointer
 *
 * Return: on success
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
