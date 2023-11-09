#include "lists.h"

/**
 * print_dlistint - print elements at doubly linked list
 *
 * @h: head for dlist
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
