#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 *
 * @head: head for linked list
 * @str: data to add
 *
 * Return: the linked list after adding node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *lk = (list_t *) malloc(sizeof(list_t));
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
	lk->next = *head;
	*head = lk;

	return (*head);
}
