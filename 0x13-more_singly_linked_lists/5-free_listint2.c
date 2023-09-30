#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *ls;

	if (head == NULL)
		return;

	while (*head)
	{
		ls = (*head)->next;
		free(*head);
		*head = ls;
	}

	head = NULL;
}
