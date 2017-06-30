#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 on success or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(unsigned long int) * 4;

	if (index > size)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
