#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t linked list
 * @head: pointer to beginning of linked list
 * Return: the head node's data, or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int hdata;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	hdata = temp->n;
	free(temp);
	return (hdata);
}
