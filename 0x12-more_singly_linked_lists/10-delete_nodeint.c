#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: double pointer to a linked list
 * @index: linked list index that starts at 0
 * Return: 1 if successful, or -1 upon failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *node;

	unsigned int count;

	h = *head;
	count = 1;
	while (count < index && h != NULL)
	{
		h = h->next;
		count++;
	}
	if (count < index || h == NULL)
	{
		return (-1);
	}
	else
	{
		if (index == 0)
		{
			node = h;
			*head = node->next;
		}
		else
		{
			node = h->next;
			h->next = node->next;
		}
		free(node);
	}
	return (1);
}
