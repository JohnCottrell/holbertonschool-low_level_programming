#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase with new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
