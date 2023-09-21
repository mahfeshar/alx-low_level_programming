#include "lists.h"
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list_t
 *
 * @h: linked list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
