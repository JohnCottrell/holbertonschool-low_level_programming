#include "holberton.h"

/**
 * void times_table - print the 9 times table, start with 0
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a < 10; a++)
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			d = c / 10;
			e = c % 10;
			if (b == 0)
			{
				_putchar('0');
			}
			else if (c < 10)
			{
				_putchar(' ');
				_putchar(e + '0');
			}
			else
			{
				_putchar(d + '0');
				_putchar(e + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
}
