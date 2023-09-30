#include "lists.h"

/**
 * list_len - the number of elements in a linked list.
 *
 * @h: head for linked list.
 *
 * Return: the length of linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
