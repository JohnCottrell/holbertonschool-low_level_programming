#include "lists.h"
#include <string.h>

/**
 * _strlen - calculates length of string
 * @str: string to be measured
 * Return: length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: very first pointer to linked list, hence head
 * @str: address of node after which new node will be added
 * Return: address of new element or NULL if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *h;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = newnode;
	}
	return (newnode);
}
