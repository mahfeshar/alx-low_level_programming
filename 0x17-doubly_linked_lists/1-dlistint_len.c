#include "lists.h"

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
