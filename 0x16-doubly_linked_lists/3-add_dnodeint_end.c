#include "lists.h"

/**
 * add_dnodeint_end - adds new node at ent of a dlistint_t doubly linked list
 * @head: pointer to a dlistint_t
 * @n: integer
 * Return: the address of the new element, or NULL upon failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tempnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || head == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head != NULL)
	{
		tempnode = *head;
		while (tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
		newnode->prev = tempnode;
	}
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	return (newnode);
}
