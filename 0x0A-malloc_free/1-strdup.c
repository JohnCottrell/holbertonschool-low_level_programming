#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns pointer to new mem alloc space which contains string copy
 * @str: string
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *cofs;

	int len, i, j;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
	{
		len++;
	}

	cofs = malloc((len + 1) * sizeof(char));

	for (j = 0; j <= len; j++)
	{
		cofs[j] = str[j];
	}
	return (cofs);
}
