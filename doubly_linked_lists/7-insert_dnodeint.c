#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *cur;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	cur = *h;
	for (i = 0; cur != NULL && i < idx - 1; i++)
		cur = cur->next;

	if (cur == NULL)
		return (NULL);

	if (cur->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = cur;
	new_node->next = cur->next;
	cur->next->prev = new_node;
	cur->next = new_node;

	return (new_node);
}
