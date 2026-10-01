#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list and all its strings
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
