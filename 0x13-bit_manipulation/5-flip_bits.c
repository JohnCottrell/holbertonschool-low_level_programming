#include "holberton.h"

/**
 * flip_bits - returns number of bit needed to flip from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size, count;

	size = sizeof(unsigned long int) * 8;

	count = 0;

	for (size = size; size > 0; size--)
	{
		if (((n ^ m) >> size) & 1)
		count++;
	}
	return (count);
}
