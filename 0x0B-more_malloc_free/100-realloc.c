#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - rellocates a memory block with malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size of allocated memory
 * @new_size: new size of allocated memory
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;

	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size * sizeof(char));
	if (newptr == NULL)
		return (NULL);
	for (i = 0; i <= old_size; i++)
		newptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (newptr);
}
