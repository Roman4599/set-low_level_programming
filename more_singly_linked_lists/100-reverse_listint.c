#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head of list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}

	*head = prev;

	return (prev);
}