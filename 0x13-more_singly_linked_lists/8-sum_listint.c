#include "lists.h"

/**
 * sum_listint - the sum of all the data (n)
 * @head: head for linked list
 *Return: the sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
