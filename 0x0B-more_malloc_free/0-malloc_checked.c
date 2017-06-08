#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: object for memory allocation
 * Return: 0 on success, or 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *memloc;

	memloc = malloc(b);
	if (memloc == NULL)
	{
		exit(98);
	}
	return (memloc);
}
