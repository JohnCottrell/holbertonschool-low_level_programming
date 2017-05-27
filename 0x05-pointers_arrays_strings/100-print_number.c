#include "holberton.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	if (n > 0)
	{
		_putchar(n / 10 + '0');
		_putchar ((n % 10) + '0');
	}
}
