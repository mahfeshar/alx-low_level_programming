#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head
 * @idx: the index of the list where the new node should be added
 * @n: the number
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *lk, *tmp;
	unsigned int i = 0;

	tmp = *head;
	lk = malloc(sizeof(listint_t));
	if (lk == NULL)
		return (NULL);

	lk->n = n;

	if (idx == 0)
	{
		lk->next = tmp;
		*head = lk;
		return (lk);
	}

	if (tmp == NULL)
		return (NULL);
	for (; i < idx - 1; i++)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	lk->next = tmp->next;
	tmp->next = lk;
	return (lk);
}
