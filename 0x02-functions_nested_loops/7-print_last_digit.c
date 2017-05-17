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
	int s;

	if (n >= 0)
	{
		l = n % 10;
		_putchar(l + '0');
		r = l;
	}
	else
	{
		s = 0 - n;
		l = s % 10;
		_putchar(l + '0');
		r = l;
	}
	return (r);
}
