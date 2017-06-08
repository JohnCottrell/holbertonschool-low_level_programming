#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of bytes
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *memarray, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memarray = malloc(sizeof(nmemb * size));
	if (memarray == NULL)
		return (NULL);
	for (i = 0; i <= nmemb; i++)
		memarray[i] = 0;
	return (memarray);
}
