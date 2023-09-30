#include "lists.h"
#include <stdio.h>

/**
 * print_listint - to print all list items
 *
 * @h: head for linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
