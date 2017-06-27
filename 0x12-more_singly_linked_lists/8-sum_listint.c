#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list
 * @head: first pointer in linked list
 * Return: sum of all data in the linked list or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *h;

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
