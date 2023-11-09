#include "lists.h"
/**
 * sum_dlistint - Function to return sum of dlinked list
 * @head: head for doubly linked list
 * Return:  the sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	if (head)
	{
		while (curr != NULL)
		{
			sum += curr->n;
			curr = curr->next;
		}
	}
	return (sum);
}
