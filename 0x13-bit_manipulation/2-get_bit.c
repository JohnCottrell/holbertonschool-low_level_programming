#include "holberton.h"

/**
 * get_bit - indicates value of a bit at a given index
 * @n: number
 * @index: index starting at 0
 * Return: the value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(unsigned long int) * 4;

	if (index > size)
		return (-1);
	return ((n >> index) & 1);
}
