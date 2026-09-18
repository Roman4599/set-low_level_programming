#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list (safe for loops)
 * @h: double pointer to head of list
 * Return: the size of the list that was freed, head is set to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *current, *next_node;
	size_t total, i, loop_len, has_loop;

	if (*h == NULL)
		return (0);

	/* detect a loop with Floyd's cycle-finding algorithm */
	has_loop = 0;
	slow = *h;
	fast = *h;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			has_loop = 1;
			break;
		}
	}

	if (has_loop)
	{
		/* count the nodes in the loop */
		loop_len = 1;
		next_node = slow->next;
		while (next_node != slow)
		{
			loop_len++;
			next_node = next_node->next;
		}

		/* measure the distance from the head to the start of the loop */
		slow = *h;
		total = 0;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
			total++;
		}

		total += loop_len;
	}
	else
	{
		current = *h;
		total = 0;
		while (current != NULL)
		{
			total++;
			current = current->next;
		}
	}

	/* free exactly the total number of distinct nodes */
	current = *h;
	for (i = 0; i < total; i++)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*h = NULL;

	return (total);
}