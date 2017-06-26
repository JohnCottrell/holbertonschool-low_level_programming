#include "lists.h"

/**
 * print_listint - prints all the elments of a listint_t list
 * @h: pointer to a list listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
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
