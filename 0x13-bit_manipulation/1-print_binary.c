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

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = (size - 1); i >= 0; i--)
	{
		if (((n >> i) & 1))
		{
			_putchar('1');
			ones++;
		}
		if ((ones > 0) && (((n >> i) & 1) == 0))
			_putchar('0');
	}
}
