#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to linked list
 * @idx: linked list index
 * @n: new node data
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h;

	unsigned int count;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	h = *head;
	count = 1;
	while (count < idx)
	{
		h = h->next;
		count++;
	}
	if (count < idx)
	{
		free(new);
		return (NULL);
	}
	else
	{	new->n = n;
		new->next = h->next;
		h->next = new;
	}
	return (new);
}
