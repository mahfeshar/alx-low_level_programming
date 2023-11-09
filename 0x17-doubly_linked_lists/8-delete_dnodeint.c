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
	dlistint_t *curr = *head;
	unsigned int len = 0, iter_times = 0;

	if (head && *head)
	{
		len = dlistint_len(*head);
		if (index > len)
			return (-1);
		if (len == 1)
		{
			*head = NULL;
			return (1);
		}
		if (index == 0)
			return (deleteFirstNode(head));
		if (index == len)
			return (deleteLastNode(head));
		while (curr != NULL)
		{
			if (index == iter_times)
			{
				curr->prev->next = curr->next;
				curr->next->prev = curr->prev;
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
	dlistint_t *curr = *head;

	curr = curr->next;
	curr->prev = (*head)->prev;
	*head = curr;
	return (1);
}

/**
 * deleteLastNode - Function to return first node
 *
 * @head: the head for doubly linked list
 * Return: Always 1 (Success)
 */

int deleteLastNode(dlistint_t **head)
{
	dlistint_t *curr = *head;

	while (curr->next != NULL)
		curr = curr->next;
	curr->next = NULL;
	curr->prev = NULL;
	curr->prev->next = NULL;
	free(curr);
	return (1);
}
