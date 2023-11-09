#include "lists.h"
/**
 * delete_dnodeint_at_index - Function to delete number
 *
 * @head: The head for doubly linked list
 * @index: The index of node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head, *tmp = NULL;
	unsigned int len = 0, iter_times = 0;

	if (head && *head)
	{
		len = dlistint_len(*head);
		if (index > len)
			return (-1);
		if (len == 1)
		{
			tmp = *head;
			*head = NULL;
			free(tmp);
			return (1);
		}
		if (index == 0)
			return (deleteFirstNode(head));
		while (curr != NULL)
		{
			if (index == iter_times)
			{
				if (len - 1 == index)
					curr->prev->next = curr->next;
				else
				{
					curr->prev->next = curr->next;
					curr->next->prev = curr->prev;
				}
				free(tmp);
				return (1);
			}
			curr = curr->next;
			iter_times++;
		}
	}
	return (-1);
}

/**
 * dlistint_len - function to know the len for dlist
 *
 * @h: head for linked list
 *
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

/**
 * deleteFirstNode - Function to return first node
 *
 * @head: the head for doubly linked list
 * Return: Always 1 (Success)
 */

int deleteFirstNode(dlistint_t **head)
{
	dlistint_t *curr = *head, *tmp = NULL;

	tmp = curr;
	curr = curr->next;
	curr->prev = (*head)->prev;
	*head = curr;
	free(tmp);
	return (1);
}
