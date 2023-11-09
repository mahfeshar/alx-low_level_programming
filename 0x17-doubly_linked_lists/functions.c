#include "lists.h"

/**
 * initialize - to initialize doubly linked list
 * @h: head for doubly linked list
 * 
 * Return: 0 for count
*/
int initialize (dlistint_t *h)
{
	h->next = NULL;
	h->prev = NULL;
	return (0);
}
