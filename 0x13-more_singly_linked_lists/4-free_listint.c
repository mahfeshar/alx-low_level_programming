#include "lists.h"

/**
 * free_listint - function that frees a listint_t
 * @head: head for linked list
 */

void free_listint(listint_t *head)
{
	linkint_t *ls;

	while (head)
	{
		ls = head->next;
		free(head);
		head = ls;
	}
}
