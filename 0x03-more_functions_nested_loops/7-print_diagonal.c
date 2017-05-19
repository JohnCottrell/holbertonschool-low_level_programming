#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of diagonal lines to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	x = 1;

	if (n < x)
		_putchar('\n');
	while (x <= n)
	{
		_putchar('\\');
		_putchar('\n');
		y = 0;
		while ((y < x) && (x != n))
		{
			_putchar(' ');
			y++;
		}
		x++;
	}
}
