#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - creates array of chars, initializes it with a specific char
 * @size: size
 * @c: char
 * Return: success (0)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (0);
	}

	i = 0;
	while (i <= size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
