#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list (safe for loops)
 * @head: pointer to head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *check;
	size_t i, count = 0;

	node = head;

	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);

		check = head;
		for (i = 0; i < count; i++)
		{
			if (node == check)
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				return (i);
			}
			check = check->next;
		}

		count++;
		node = node->next;
	}

	return (count);
}