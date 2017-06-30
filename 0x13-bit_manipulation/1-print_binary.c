#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number to be represented in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int size, ones;

	int i;

	ones = 0;

	size = sizeof(unsigned long int) * 8;

	for (i = size; i > 0; i--)
	{
		if (n & (1 << i))
		{
			_putchar('1');
			ones++;
		}
		else if (ones > 0)
			_putchar('0');
	}
	if (n == 0)
		_putchar('0');
}
