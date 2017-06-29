#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to a linked list
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextone, *previous;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	previous = NULL;
	nextone = *head;
	while (nextone != NULL)
	{
		nextone = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = nextone;
	}
	*head = previous;
	return (*head);
}
