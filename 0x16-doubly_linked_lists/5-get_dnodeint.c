#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t doub linked list
 * @head: pointer to a doubly linked list
 * @index: index of nodes starting at zero
 * Return: the node, or NULL if the node does not exist
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	unsigned int count;

	node = head;
	count = 0;
	while (count < index)
	{
		node = node->next;
		if (node == NULL)
		{
			return (NULL);
		}
		count++;
	}
	return (node);
}
