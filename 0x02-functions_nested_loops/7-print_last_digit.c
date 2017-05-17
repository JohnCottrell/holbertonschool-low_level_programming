#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: print the last digit of a number
 *
 * Return: the value of the last digit r
 */
int print_last_digit(int n)
{
	int l;
	int r;

	if (n >= 0)
	{
		l = n % 10;
		_putchar(l + '0');
		r = l;
	}
	else
	{
		l = (n % 10) * -1;
		_putchar(l + '0');
		r = l;
	}
	return (r);
}
