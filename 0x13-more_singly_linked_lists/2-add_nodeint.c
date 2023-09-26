#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: pointer to head
 * @n: new int
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lk;

	lk = malloc(sizeof(listint_t));

	if (lk == NULL)
		return (NULL);
	lk->n = n;
	lk->next = *head;
	*head = lk;

	return (lk);
}
