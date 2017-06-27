#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list
 * @head: first pointer in linked list
 * @index: index of nodes starting at 0
 * Return: the node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

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
