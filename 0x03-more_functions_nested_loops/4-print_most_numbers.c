#include "holberton.h"

/**
 * print_most_numbers - print 0 to 9 but omit 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c[] = { 48, 49, 51, 53, 54, 55, 56, 57, '\n' };
	int i;

	for (i = 0; i < 9; ++i)
		_putchar(c[i]);
}
