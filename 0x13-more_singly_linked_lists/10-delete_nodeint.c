#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to head
 * @index: the indext of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *lk, *tmp = *head;
	unsigned int i = 0;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (; i < index - 1; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	lk = tmp->next;
	tmp->next = lk->next;
	free(lk);
	return (1);
}
