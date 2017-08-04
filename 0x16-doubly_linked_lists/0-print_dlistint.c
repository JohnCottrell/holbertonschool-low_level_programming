#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: pointer to a dlistint_t
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numofnodes;

	numofnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numofnodes++;
	}
	return (numofnodes);
}
