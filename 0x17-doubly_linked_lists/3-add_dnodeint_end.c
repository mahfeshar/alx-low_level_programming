#include "lists.h"

/**
 * add_dnodeint_end - Function to add node at end
 *
 * @head: head of doubly linked list
 * @n: number that I want to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *curr = NULL;

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	newNode->next = NULL;
	newNode->prev = curr;
	curr->next = newNode;
	return (newNode);
}
