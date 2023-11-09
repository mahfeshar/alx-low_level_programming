#include "lists.h"
/**
 * insert_dnodeint_at_index - Function to insert node
 * @h: head for doubly linked list
 * @idx: index that I want to add node in
 * @n: The number that I want to add
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = NULL, *newNode = NULL;
	unsigned int iter_time = 0, len;

	if (h == NULL)
		return (NULL);

	len = dlistint_len(*h);

	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (len == idx)
		return (add_dnodeint_end(h, n));

	curr = *h;
	while (curr != NULL)
	{
		if (iter_time == idx)
		{
			newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->next = curr;
			newNode->prev = curr->prev;
			curr->prev = newNode;
			curr = newNode;
			curr->prev->next = newNode;
			return (newNode);
		}
		iter_time++;
		curr = curr->next;
	}
	return (curr);
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
