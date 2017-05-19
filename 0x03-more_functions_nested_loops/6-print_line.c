#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: number of lines to be printed
 *Return: void
 */
void print_line(int n)
{
	int x;

	x = 1;

	while ((n >= x) && (n > 0))
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
