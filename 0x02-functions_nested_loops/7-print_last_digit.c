#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: print the last digit of a number
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	int l;

	if (n >= 0)
	{
		l = n % 10;
		_putchar(l + '0');
	}
	else if (n < 0)
	{
		l = (0 - n) % 10;
		_putchar(l + '0');
	}
	return (l);
}
