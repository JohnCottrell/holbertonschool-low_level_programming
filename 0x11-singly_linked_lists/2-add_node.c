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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: very first pointer to linked list, hence head
 * @str: address of node to be preceeded by new node
 * Return: address of new element or NULL for failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
