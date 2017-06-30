#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: 1 upon success or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(unsigned long int) * 4;

	if (index > size)
		return (-1);
	*n &= ~(1 << index);

	return (1);

}
