#include "lists.h"

/**
 * sum_dlistint - returns sum of all data(n) of a dlistint_t doubly linked list
 * @head: pointer to a dlistint_t doubly linked list
 * Return: sum of all the data in the list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	h = head;
	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
