#include "holberton.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of triangle to be printed
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c, s, x;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 1; a <= size; a++)
	{
		s = size - a;
		x = size - s;
		for (b = 1; b <= s; b++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= x; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
