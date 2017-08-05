#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to a dlistint_t doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempnode;

	while (head != NULL)
	{
		tempnode = head;
		head = head->next;
		free(tempnode);
	}
}
