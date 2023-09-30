#include "lists.h"

/**
 * add_nodeint_end - dds a new node at the end of a listint_t
 * @head: pointer to head
 * @n: new integer to add
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lk, *tmp;

	lk = malloc(sizeof(listint_t));

	if (lk == NULL)
		return (NULL);

	lk->n = n;
	lk->next = NULL;

	if (*head == NULL)
		*head = lk;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = lk;
	}
	return (lk);
}
