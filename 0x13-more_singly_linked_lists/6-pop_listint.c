#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to head
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *ls;
	int res;

	if (*head == NULL)
		return (0);

	ls = *head;
	res = (*head)->n;
	*head = (*head)->next;
	free(ls);

	return (res);
}
