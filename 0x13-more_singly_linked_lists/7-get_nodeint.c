#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: head to linked list
 * @index: the index of the node
 * Return:  the nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
