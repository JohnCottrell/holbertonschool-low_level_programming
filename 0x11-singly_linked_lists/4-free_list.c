#include "lists.h"

/**
 * free_list - function frees a list_t list
 * @head: first pointer in a linked list, hence head
 * Returns: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
