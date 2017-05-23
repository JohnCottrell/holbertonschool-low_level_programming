#include "holberton.h"

/**
 * puts_half - print half of a string, followed by a new line
 * @str: string to be processed
 * Return: void
 */
void puts_half(char *str)
{
	int len, i, n;

	len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	len = (len - (len / 2));
	for (n = len; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
