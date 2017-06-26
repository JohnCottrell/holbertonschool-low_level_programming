#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head of linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numofnodes;

	numofnodes = 0;

	while (h != 0)
	{
		h = h->next;
		numofnodes++;
	}
	return (numofnodes);
}
