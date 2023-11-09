#include "lists.h"
/**
 * get_dnodeint_at_index - Function to return nth node
 *
 * @head: head for doubly linked list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node or null if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int iter_time = 0;

	if (head)
	{
		while (curr != NULL)
		{
			if (iter_time == index)
				return (curr);
			curr = curr->next;
			iter_time++;
		}
	}
	return (NULL);
}
