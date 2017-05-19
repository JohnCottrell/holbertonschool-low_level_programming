#include "holberton.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of square to be printed
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y++;
		}
		x++;
		_putchar('\n');
	}
}
