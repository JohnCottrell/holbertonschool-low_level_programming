#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, follwed by a new line
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int len, i, r;

	len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	len = len - 1;
	for (r = len; s[r]; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
