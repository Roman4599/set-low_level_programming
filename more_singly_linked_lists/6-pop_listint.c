#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: double pointer to head of list
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	n = current->n;
	*head = (*head)->next;
	free(current);

	return (n);
}