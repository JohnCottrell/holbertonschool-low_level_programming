#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to linked list
 * @n: value
 * Return: the address of the new element or Null if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *counter;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	counter = *head;
	while (counter->next != NULL)
	{
		counter = counter->next;
	}
	new->next = counter->next;
	new->n = n;
	counter->next = new;

	return (new);
}
