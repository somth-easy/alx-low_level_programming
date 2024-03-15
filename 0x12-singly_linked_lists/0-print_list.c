#include "lists.h"

/**
 * print_list - entry point
 * @h: node pointer
 *
 * Return: on success
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d]  %s\n", h->len, h->str);
		x++;
		h = h->next;
	}
	return (x);
}
