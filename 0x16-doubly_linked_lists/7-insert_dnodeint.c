#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given position
 * @h: pointer to a dlistint_t doubly linked list
 * @idx: index of list where new node should be added. Starts at 0.
 * @n: new node data
 * Return: address of the new node, or NULL upon failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *h1;

	unsigned int count;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	h1 = *h;
	count = 1;
	while (count < idx && h1 != NULL)
	{
		h1 = h1->next;
		count++;
	}
	if (count < idx)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = h1;
			*h = new;
		}
		else
		{
			new->next = h1->next;
			h1->next = new;
		}
	}
	return (new);
}
