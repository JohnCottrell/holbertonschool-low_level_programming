#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: print the last digit of a number
 *
 * Return: l.
 */
int print_last_digit(int n)
{
	int l;
	int r;
	int a;

	if (n >= 0)
	{
		l = n % 10;
		_putchar(l + '0');
		r = l;
	}
	else
	{
		a = (0 - n) % 10;
		_putchar(a + '0');
		r = a;
	}
	return (r);
}
