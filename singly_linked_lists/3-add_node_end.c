#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = 0;
	while (new->str[new->len] != '\0')
		new->len++;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	node = *head;
	while (node->next != NULL)
		node = node->next;
	node->next = new;
	return (new);
}
