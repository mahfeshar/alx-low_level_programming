#include "lists.h"

/**
 * add_dnodeint - function to add node at first
 *
 * @head: pointer to linked list
 * @n: the number tp add
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (*head);
	}
	newNode->next = *head;
	newNode->prev = NULL;
	(*head)->prev = newNode;
	*head = newNode;
	return (*head);
}
