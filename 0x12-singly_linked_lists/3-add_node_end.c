#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t
 *
 * @head: head for linked list
 * @str: data to add
 *
 * Return: the linked list after adding node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lk = (list_t *) malloc(sizeof(list_t));
	list_t *tmp;
	char *new;
	int len;

	if (lk == NULL)
		return (NULL);

	new = strdup(str);
	if (new == NULL)
	{
		free(lk);
		return (NULL);
	}

	for (len = 0; new[len]; len++)
		;

	lk->str = new;
	lk->len = len;
	lk->next = NULL;

	if (*head == NULL)
		*head = lk;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = lk;
	}
	return (*head);
}
