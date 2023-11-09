#include "lists.h"
/**
 * free_dlistint - Function to free the doubly linked list
 * @head: head of doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;

	while (head != NULL)
	{
		head = head->next;
		free(curr);
		curr = head;
	}
}
