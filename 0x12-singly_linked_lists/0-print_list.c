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
	list_t *p = head;
	int cnt = 0;
	while (p->next != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", p->len, p->str);
			p = p->next;
		}
		cnt++;
	}
	return (cnt);
}
