#include "lists.h"

/**
 * listint_len - the number of elements in a linked list
 * @h: head
 * Return: the number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
