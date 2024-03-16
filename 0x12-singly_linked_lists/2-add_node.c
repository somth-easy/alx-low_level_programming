#include "lists.h"

/**
 * add_node - entry point
 *
 * @head: head pointer
 * @str: member pointer
 *
 * Return: on success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = (list_t *)malloc(sizeof(list_t));

	new_head->str = strdup(str);
	new_head->next = *head;
	new_head->len = strlen(str);
	*head = new_head;

	return (new_head);
}


