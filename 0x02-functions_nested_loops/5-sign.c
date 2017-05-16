#include "holberton.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: Test the n variable for + - or 0
 *
 * Return: 1 print + if n >0, return 0 print 0 if=0, return -1 print - if < 0
 */
int print_sign(int n)
{
	int result;

	if (n  > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}
