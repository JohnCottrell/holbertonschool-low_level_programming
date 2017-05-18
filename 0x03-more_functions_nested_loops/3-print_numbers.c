#include "holberton.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line
 *
 *Return: void
 */
void print_numbers(void)
{
	int x;

	x = -1;

	while (x < 9)
	{
		++x;
		_putchar(x + '0');
	}
	_putchar('\n');
}
